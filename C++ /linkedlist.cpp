#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val ;
        next = NULL ;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL ;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if (head==NULL){
            head = tail = newNode;
            return;
        }
        else {
            Node* temp = head;
            newNode->next = head ;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if (head==NULL){
            head = tail = newNode;
            return;
        }
        else {
            Node* temp = head;
            while(temp->next!=NULL)
                temp = temp->next ;
            temp->next = newNode;
            tail = newNode;
        }
    }
    void display(){
        Node* temp = head ;
        while(temp!=NULL){          // important condition
            cout<<temp->data<<" ";
            temp = temp->next ;
        }
        cout<<endl;
    }
    void pop_front(){
        if(head==NULL){
            cout<<"Empty linked list nothing to pop !!"<<endl;
            return ;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
    }
    void pop_back(){
        if(head==NULL){
            cout<<"Empty linked list nothing to pop !!"<<endl;
            return ;
        }
        Node* temp = head ;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL ;
        tail = temp ;
    }
    void insert(int val , int index){
        Node* newNode = new Node(val) ;
        Node* temp = head ;
        for(int i = 0 ; i < index-1 ; i++)
            temp = temp->next;
            newNode->next = temp->next;
        temp->next = newNode;
    }
};
int main() {
    List l1 ;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_back(4);
    l1.pop_front();
    l1.pop_back();
    l1.display();
    l1.insert(69,2);
    l1.display();
    return 0;
}