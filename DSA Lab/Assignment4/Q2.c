#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data ;
	struct node* next ;
} node;
node* createCLL(node* head , int val ){
	node* newNode = (node*)malloc(sizeof(node));
	head = newNode;
	newNode->data = val ;
	newNode->next = head ;
	return head ;
}
node*push_back(node* head , int val){
	if(head == NULL){
		head = createCLL(head, val);
		return head ;
	}
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
node* push_front(node*head ,int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val ;
    newNode->next = NULL ;
    node* temp = head ;
	while(temp->next!=head)
		temp = temp->next;
	temp->next = newNode ;
    newNode->next = head ;
    head = newNode;
    return head ;
 }
node* pop_back(node* head){
	node*temp = head ; 
	while(temp->next->next!=head)
		temp = temp->next;
	temp->next = head ;
	return head ;
}
void search(node* head, int target){
	node* temp = head ;
	int counter = 0 ;
	while(temp->data!=target){
		temp = temp->next;
		counter++;
	}
	printf("The index at which the target element is present is : %d and the address of the required node is : %p \n" , counter+1 , temp);
}
void display(node*head){
    node* temp = head->next ;
    printf("%d --> ",head->data);
    while(temp!=head){
        printf("%d --> ",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
    printf("\n");
}
void main(){
node* h1 = NULL;
 	int n , temp ;
 	printf("Enter the size of your circular linked list : \n");
 	scanf("%d",&n);
	printf("Enter the values of the circular linked list : \n");
	scanf("%d",&temp);
 	h1 = createCLL(h1,temp);
	for(int i = 0 ; i < n-1 ; i++){
		scanf("%d",&temp);
		h1 = push_back(h1,temp);
	}
 	display(h1);
 	h1 = push_front(h1,0);
 	display(h1);
 	h1 = push_back(h1,0);
 	display(h1);
 	h1 = pop_back(h1);
 	display(h1);
 	search(h1,6);
}
