#include <stdio.h>
#include <stdlib.h>
 typedef struct node{
    int data ; 
    struct node* next;
 } node;
  node* createLL(node*head ,int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val ;
    newNode->next = NULL ;
    head = newNode;
 	return head ;
 }
 node* push_back(node*head ,int val){
    if(head == NULL){
        head = createLL(head , val) ;
        return head ;
    }
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
        printf("%d --> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
    printf("\n");
}
int middleLL(node* head){
    node* slowptr = head , *fastptr = head ;
    while(fastptr!=NULL && fastptr->next!=NULL){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next ;
    }
    return slowptr->data ;
}
int main(void) {
   node* h1 = NULL;
 	int n , temp;
 	printf("Enter the size of your linked list : \n");
 	scanf("%d",&n);
    printf("Enter the values of the linked list : \n");
    scanf("%d",&temp);
    h1 = createLL(h1,temp);
    for( int i = 0 ; i < n-1 ; i++ ){
        scanf("%d",&temp);
        h1 = push_back(h1,temp) ;
    }
 	display(h1);
 	printf("The middle element of this linked list is : %d \n",middleLL(h1));
}
