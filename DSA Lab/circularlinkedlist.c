#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data ;
    struct node* next ;
} node ;
node* push_back(node* head , int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val ;
    newNode->next = NULL ;
    node* temp = head ;
    while(temp->next!=head)
        temp = temp->next;
    temp->next = newNode ;
    newNode->next = head ;
    return head ;
}
node* push_front(node*head , int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val ;
    node*temp = head ;
    while(temp->next!=head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head ;
    head = newNode;
    return head ;
}
node* createCLL(node* head , int val){
    node* newNode = (node*)malloc(sizeof(node));
    head = newNode ;
    newNode->data = val ;
    newNode->next = head ;
    return head;
}
void display(node* head){
    printf("%d --> ",head->data);
    node*temp = head->next ;
    while(temp!=head){
        printf("%d --> ",temp->data);
        temp = temp->next ;
    }
    printf("%d\n",temp->data);
}
int main() {
    node* h = createCLL(h,1);
    h = push_back(h,2);
    h = push_back(h,3);
    h = push_back(h,4);
    h = push_back(h,5);
    //display(h);
    h = push_front(h,5);
    h = push_front(h,4);
    h = push_front(h,3);
    h = push_front(h,2);
    h = push_front(h,1);
    display(h);
    return 0;
}