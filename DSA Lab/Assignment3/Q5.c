#include <stdio.h>
#include <stdlib.h>
 typedef struct node{
    int coeff ; 
    int power ;
    struct node* next;
 } node;
  node* createLL(node*head){
    node* newNode = (node*)malloc(sizeof(node));
    int coeff , power ;
    printf("Enter the coeff and power of the first term of the polynomial : \n");
    scanf("%d %d" , &coeff , &power);
    newNode->coeff = coeff ;
    newNode->power = power ;
    newNode->next = NULL ;
    head = newNode;
 	return head ;
 }
 node* push_back(node*head ){
    if(head == NULL){
        head = createLL(head);
        return head ;
    }
    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL ;
    int coeff , power ;
    printf("Enter the coeff and power of the term  : \n");
    scanf("%d %d" , &coeff , &power);
    newNode->coeff = coeff ;
    newNode->power = power ;
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
        printf("%dx^%d ",temp->coeff,temp->power);
        if(temp->next!=NULL)
            printf("+ ");
        temp = temp->next;
    }
    printf("\n");
}
void sort(node*head){
    if(head == NULL){
        printf("Empty linked list !! \n");
        return ;
    }
    node* i , *j ;
    i = head , j = head ;
    int tempP , tempC ; 
    for(i = head ; i!=NULL ; i=i->next){
        for(j=head ; j!=NULL ; j=j->next){
            if(j->power < j->next->power){
                tempP = j->power ;
                tempC = j->coeff ;
                j->power = j->next->power ;
                j->coeff = j->next->coeff ;
                j->next->power = tempP ;
                j->next->coeff = tempC ;
            }
        }
    }
}
node* sum(node* h1 , node* h2){
	node* i = h1 , *j = h2 ;
    for( i = h1 ; i->next!=NULL ; i = i->next ){
        for( j = h2 ; j->next!=NULL ; j = j->next){
            if(i->power == j->power){
                i->coeff += j->coeff ;
            }
        }
    }
    return h1 ;
}
int main(void) {
   node* h1 = NULL , *h2 = NULL;
   int n ;
    printf("Enter the highest power of first polynomial : \n");
    scanf("%d",&n);
    h1 = createLL(h1);
    for(int i = 0 ; i < n-1 ; i++)
        h1 = push_back(h1);
    printf("Enter the highest power of second polynomial : \n");
    scanf("%d",&n);
 	h2 = createLL(h2);
    for(int i = 0 ; i < n-1 ; i++)
        h2 = push_back(h2);
    sort(h1);
    sort(h2);
 	node* h3 = NULL ;
 	h3 = sum(h1,h2) ;
 	display(h3) ;
}
