#include <stdio.h>
#include <stdlib.h>
 typedef struct node{
    int data ; 
    struct node* next;
 } node;
 node* createLL(node*head , int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val ;
    newNode->next = NULL ;
    head = newNode;
    return head ;
 }
 node* push_front(node*head ,int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL ;
    newNode->data = val ;
    newNode->next = head ;
    head = newNode;
    return head ;
 }
 node* push_back(node*head ,int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL ;
    newNode->data = val ;
    node* temp = head ;
    while(temp->next!=NULL){
        temp = temp->next ;
    }
    temp->next = newNode ;
    return head ;
 }
 node* insert(node*head , int index , int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL ;
    newNode->data = val ;
    node* temp = head ;
    for(int i = 0 ; i < index-1 ; i++)
        temp = temp->next;
    newNode->next = temp->next;
    temp->next=newNode;
    return head;
 }
void display(node*head){
    node* temp = head ;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    node*head1 = NULL ;
    head1 = createLL(head1 , 5);
    head1 = push_front(head1,10);
    head1 = push_front(head1,20);
    head1 = push_front(head1,30);
    head1 = push_back(head1,10);
    head1 = insert(head1,1,69);
    display(head1);
    return 0;
}