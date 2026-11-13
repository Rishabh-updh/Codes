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
 void display(node*head){
    node* temp = head ;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
node* mergeLL(node* head1 , node* head2){
    node* temp = head1;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = head2 ;
    return head1 ;
}
node* reverse(node* head){
    node* prev = NULL , *curr = head, *next = NULL ;
    while(curr!=NULL){
    next = curr->next;
    curr->next = prev;
    prev = curr ;
    curr = next ;
    }
    head = prev;
    display(head);
    return head ;
}
int middleLL(node* head){
    node* slowptr = head , *fastptr = head ;
    while(fastptr!=NULL && fastptr->next!=NULL){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next ;
    }
    return slowptr->data ;
}
int main() {
    node*head1 = NULL ;
    head1 = createLL(head1 , 1);
    head1 = push_back(head1,2);
    head1 = push_back(head1,3);
    head1 = push_back(head1,4);
    head1 = push_back(head1,5);
    head1 = push_back(head1,6);
    head1 = push_back(head1,7);
    display(head1);
    node*head2 = NULL ;
    head2 = createLL(head2 , 8);
    head2 = push_back(head2,9);
    head2 = push_back(head2,10);
    head2 = push_back(head2,11);
    head2 = push_back(head2,12);
    head2 = push_back(head2,13);
    head2 = push_back(head2,14);
    head2 = push_back(head2,15);
    display(head2);
    node* head3 = mergeLL(head1,head2);
    display(head3);
    head3 = reverse(head3);
    printf("The middle of the linked list is : %d \n",middleLL(head3));
    return 0;
}