#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node{
    int data ;
    struct node* next ;
    struct node* prev ;
} node ;
node* push_back(node* head , int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val ;
    newNode->prev = NULL ;
    newNode->next = NULL ;
    node* temp = head ;
    while(temp->next!=head)
        temp = temp->next ;
    temp->next = newNode ;
    newNode->prev = temp ; 
    newNode->next = head ;
    head->prev = newNode ;
    return head ;
}
node* createCDLL(node* head , int size){
    node* newNode = (node*)malloc(sizeof(node));
    head = newNode ;
    newNode->data = 1 ;
    newNode->prev = head ;
    newNode->next = head ;
    for(int i = 2 ; i <= size; i++)
       head = push_back(head,i);
    return head ;
}
void display(node* head){
    printf("%d <-> ",head->data);
    node* temp = head->next ;
    while(temp!=head){
        printf("%d <-> ",temp->data);
        temp = temp->next;
    }
    printf("%d <-> ",temp->data);
    printf("\n");
}
int main() {
    node* h = NULL ;
    h = createCDLL(h,10);
    display(h);
    return 0;
}