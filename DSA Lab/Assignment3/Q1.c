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
 node* pop_front(node*head){
	if(head==NULL){
		printf("Empty linked list");
		return head;
	}
    head = head->next;
    return head ;
 }
 node* pop_back(node*head){
	if(head==NULL){
		printf("Empty linked list");
		return head;
	}
	if(head->next == NULL){
    	free(head);
    	return NULL;
	}
    node* temp = head ;
    while(temp->next->next!=NULL)
        temp = temp->next;
    temp->next=NULL;
    return head ;
 }
 node* deletionIndex(node* head , int index){
 	node* temp = head ;
 	if(index==0){
 		head = head->next;
 		return head ;
 	}
 	for(int i = 0 ; i < index-1 ; i++)
 		temp = temp->next;
 	temp->next = temp->next->next;
 	return head ;
 }
 
 void display(node*head){
    node* temp = head ;
    while(temp!=NULL){
        printf("%d --> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
    printf("\n");
}
int main(void){
	int n , data , index;
	node* h0 = NULL;
	printf("Enter the number of elements you wish to have in the linked list : \n");
	scanf("%d",&n);
	printf("Enter the value for node number 1 : \n");
	scanf("%d",&data);
	h0 = createLL(h0,data);
	for(int i = 1 ; i < n ; i++){
		printf("Enter the value for node number %d : \n",i+1);
		scanf("%d",&data);
		h0 = push_back(h0,data);
	}
	display(h0);
	printf("Enter the index you want to delete from the linked list : \n");
	scanf("%d",&index);
	h0 = deletionIndex(h0,index);
	display(h0);
}
