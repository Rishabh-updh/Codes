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
 node* pop_front(node*head){
    head = head->next;
    return head ;
 }
 node* pop_back(node*head){
    node* temp = head ;
    while(temp->next->next!=NULL)
        temp = temp->next;
    temp->next=NULL;
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
node* mergeLL(node* head1 , node* head2){
    node* temp = head1;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = head2 ;
    return head1 ;
}
void reverse(node* head){
    node* prev = NULL , *curr = head, *next = NULL ;
    while(curr!=NULL){
    next = curr->next;
    curr->next = prev;
    prev = curr ;
    curr = next ;
    }
    head = prev;
    display(head);
}
int middleLL(node* head){
    node* slowptr = head , *fastptr = head ;
    while(fastptr!=NULL && fastptr->next!=NULL){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next ;
    }
    return slowptr->data ;
}
node* sortedmerge(node* h1 , node* h2){
    if(h1==NULL || h2==NULL){
        if(h1==NULL) return h2 ;
        else if(h2==NULL) return h2 ;
    }
    else if(h1->data <= h2->data){
        h1->next = sortedmerge(h1->next,h2);
        return h1;
    }
    else {
        h2->next = sortedmerge(h1,h2->next);
        return h2;
    }
}
int main() {
    // creating a linked list ;
    node*head1 = NULL ;
    head1 = createLL(head1 , 5);
    head1 = push_front(head1,10);
    head1 = push_front(head1,20);
    head1 = push_front(head1,30);
    head1 = push_back(head1,10);
    head1 = insert(head1,1,69);
    // head = pop_back(head);
    // head = pop_front(head);
    //display(head1);
    node*head2 = NULL ;
    head2 = createLL(head2 , 7);
    head2 = push_front(head2,12);
    head2 = push_front(head2,25);
    head2 = push_front(head2,38);
    head2 = push_back(head2,19);
    head2 = insert(head2,1,96);
    // head = pop_back(head);
    // head = pop_front(head);
    //display(head2);
    node* head3 = mergeLL(head1,head2);
    // display(head3);
    //reverse(head3);
    // printf("The middle of the linked list is : %d \n",middleLL(head3));
    node*h1 = createLL(h1,1);
    h1 = push_back(h1,3);
    h1 = push_back(h1,5);
    h1 = push_back(h1,7);
    display(h1);
    node*h2 = createLL(h2,2);
    h2 = push_back(h2,4);
    h2 = push_back(h2,6);
    h2 = push_back(h2,8);
    display(h2);
    node*h3 = sortedmerge(h1,h2);
    display(h3);
    return 0;
}