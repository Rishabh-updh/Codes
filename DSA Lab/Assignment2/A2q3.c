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
    if(head==NULL){
        head = createLL(head,val);
        return head;
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
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
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
    int n1 , n2 , temp ;
    node*head1 = NULL ;
    printf("Enter the number of elements in first linked list \n ");
    scanf("%d",&n1);
    printf("Enter the values of the linked list : \n ");
    scanf("%d",&temp);
    head1 = createLL(head1 , temp);
    for(int i = 0 ; i < n1-1 ; i++){
        scanf("%d",&temp);
        head1 = push_back(head1,temp);
    }
    display(head1);
    node*head2 = NULL ;
     printf("Enter the number of elements in second linked list \n ");
    scanf("%d",&n2);
    printf("Enter the values of the linked list : \n ");
    scanf("%d",&temp);
    head2 = createLL(head2 , temp);
    for(int i = 0 ; i < n2-1 ; i++){
        scanf("%d",&temp);
        head2 = push_back(head2,temp);
    }
    display(head2);
    node*head3 = NULL ;
    head3 = sortedmerge(head1 , head2);
    display(head3);
    return 0;
}