#include <stdio.h>
#include <stdlib.h>
 typedef struct node{
    int data ; 
    struct node* next;
    struct node* prev;
 } node;
 node* createDLL(node*head , int val ){
 	node* newNode = (node*)malloc(sizeof(node));
   newNode->data = val ;
   newNode->next = NULL ;
   newNode->prev = NULL ;
   head = newNode;
 	return head ;
 }
 node* push_back(node*head ,int val){
   if(head == NULL){
      head = createDLL(head , val);
      return head ;
   }
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
   if(head == NULL){
      head = createDLL(head , val);
      return head ;
   }
    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL ;
    newNode->data = val ;
    newNode->next = head ;
    head->prev = newNode ;
    head = newNode;
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
    temp->next->prev = newNode ;
    temp->next=newNode;
    return head;
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
 int main(void){
 	node* h1 = NULL;
 	int n , temp ;
 	printf("Enter the size of your doubly linked list : \n");
 	scanf("%d",&n);
   printf("Enter the values of your doubly linked list : \n");
   scanf("%d",&temp);
 	h1 = createDLL(h1,temp);
   for(int i = 0 ; i < n-1 ; i++){
      scanf("%d",&temp);
 	   h1 = push_back(h1,temp);
   }
 	display(h1);
   h1 = push_front(h1,23);
   h1 = push_back(h1,26);
 	h1 = insert(h1,2,99);
 	display(h1);
 }
