#include <stdio.h>
#include <stdlib.h>
 typedef struct node{
    int data ; 
    struct node* next;
    struct node* prev;
 } node;
 node* push_back(node*head ,int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL ;
    newNode->data = val ;
    node* temp = head ;
    while(temp->next!=NULL){
        temp = temp->next ;
    }
    newNode->prev = temp ;
    temp->next = newNode ;
    return head ;
 }
 node* push_front(node*head ,int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL ;
    newNode->data = val ;
    newNode->next = head ;
    head->prev = newNode ;
    head = newNode;
    return head ;
 }
  node* pop_front(node*head){
    head = head->next;
    //head->prev->next = NULL ;
    head->prev = NULL ;
    return head ;
 }
 node* pop_back(node*head){
    node* temp = head ;
    while(temp->next->next!=NULL)
        temp = temp->next;
        //temp->next->prev = NULL ;
    temp->next=NULL;
    return head ;
 }
 node* createDLL(node*head , int size ){
 	node* newNode = (node*)malloc(sizeof(node));
    newNode->data = 1 ;
    newNode->next = NULL ;
    newNode->prev = NULL ;
    head = newNode;
 	for(int i = 2 ; i <= size ; i++)
 		head = push_back(head , i);
 	return head ;
 }
 node* insertBEFORE(node*head , int index , int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL ;
    newNode->data = val ;
    node* temp = head ;
    for(int i = 0 ; i < index-1 ; i++)
        temp = temp->next;
    newNode->next = temp->next;
    temp->next->prev = newNode ;
    temp->next=newNode;
    return head;
 }
 node* insertAFTER(node*head , int index , int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL ;
    newNode->data = val ;
    node* temp = head ;
    for(int i = 0 ; i < index ; i++)
        temp = temp->next;
    newNode->next = temp->next;
    temp->next->prev = newNode ;
    temp->next=newNode;
    return head;
 }
 node* delete(node* head , int index){
 	node* temp = head ;
 	for(int i = 0 ; i < index ; i++)
 		temp = temp->next;
 	temp->prev->next = temp->next ;
 	temp->next->prev = temp->prev ;
 	return head ;
 }
 void display(node*head){
    node* temp = head ;
    while(temp!=NULL){
        printf("%d <--> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
    printf("\n");
}
node* reverseDLL(node* head){
    node* temp = NULL , *curr = head ;
    while(curr!=NULL){
        temp = curr->prev ;
        curr->prev = curr->next ;
        curr->next = temp ;
        curr = curr->prev ;
    }
    head = temp->prev ;
    display(head);
}
int main(void){
 	node* h1 = NULL;
 	int n ;
 	printf("Enter the size of your doubly linked list : \n");
 	scanf("%d",&n);
 	h1 = createDLL(h1,n);
 	//h1 = push_front(h1,0);
 	//display(h1);
 	// h1 = insertBEFORE(h1,1,99);
 	// h1 = insertAFTER(h1,1,100);
 	//display(h1);
 	// h1 = pop_back(h1);
 	// display(h1);
 	// h1 = pop_front(h1);
 	// display(h1);
 	// h1 = delete(h1,2);
 	display(h1);
    h1 = reverseDLL(h1);
 }