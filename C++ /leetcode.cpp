#include <iostream>
#include <vector>
using namespace std;

// ---------- LeetCode's structure ----------
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* reverse(ListNode* head){
        ListNode* prev = NULL , *curr = head , *next = NULL ;
        while(curr!=NULL){
            next = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = next ;
        }
        return prev;
    }
// ---------- Your function goes here ----------
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    l1 = reverse(l1) ;
    l2 = reverse(l2) ;
    ListNode* temp_l1 = l1 , *temp_l2 = l2 , *head = NULL , *tail = NULL;
        int num1 = 0 , num2 = 0 ;
        while(temp_l1!=NULL){
            num1 = num1*10 + temp_l1->val ;
            temp_l1 = temp_l1->next ;
        }
        while(temp_l2!=NULL){
            num2 = num2*10 + temp_l2->val ;
            temp_l2 = temp_l2->next ;
        }
        cout<<"num1 = " << num1 <<" " <<"num2 = " << num2 << endl ;
        num1+=num2;
        cout << num1 << endl;
        while(num1!=0){
            int temp = num1%10;
            num1/=10;
            if(head == NULL) {
                head = new ListNode(temp) ;
                tail = head ;
            }
            else {
                tail->next = new ListNode(temp);
                tail = tail->next ;
            }
        }
        return head ;
}

// ---------- Helper: build a linked list from a vector ----------
ListNode* buildList(vector<int>& nums) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int val : nums) {
        if (head == nullptr) {
            head = new ListNode(val);
            tail = head;
        } else {
            tail->next = new ListNode(val);
            tail = tail->next;
        }
    }
    return head;
}

// ---------- Helper: print a linked list ----------
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// ---------- main: sets up input, calls your function, prints output ----------
int main() {
    vector<int> nums1 = {2, 4, 3};
    vector<int> nums2 = {5, 6, 4};

    ListNode* l1 = buildList(nums1);
    ListNode* l2 = buildList(nums2);

    cout << "l1: ";
    printList(l1);
    cout << "l2: ";
    printList(l2);

    ListNode* result = addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result);

    return 0;
}