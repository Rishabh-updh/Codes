#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node{
    char str[100];
    struct node* next ;
    struct node* prev ;
} node;
node* createDLL(node* head){
    node* newNode = (node*)malloc(sizeof(node));
    printf("Enter your advertisement !! \n");
    getchar();
    fgets(newNode->str , 100 , stdin) ;
    newNode->next = NULL ;
    newNode->prev = NULL ;
    head = newNode ;
    return head ;
}
node* createCLL(node*head){
    node* newNode = (node*)malloc(sizeof(node));
    printf("Enter your advertisement !! \n");
    getchar();
    fgets(newNode->str , 100 , stdin) ;
    newNode->next = newNode ;
    newNode->prev = newNode ;
    head = newNode ;
    return head ;
}
node* push_backCLL(node* head){
    if(head==NULL){
        head = createCLL(head);
        return head ;
    }
    node* newNode = (node*)malloc(sizeof(node));
    printf("Enter you advertisement !! \n");
    getchar();
    fgets(newNode->str , 100 , stdin);
    newNode->next = NULL ;
    node* temp = head ;
    while(temp->next!=head)
        temp = temp->next ;
    newNode->prev = temp ;
    temp->next = newNode ;
    newNode->next = head ;
    head->prev = newNode ;
    return head ;
}
node* push_back(node* head){
    if(head==NULL){
        head = createDLL(head);
        return head ;
    }
    node* newNode = (node*)malloc(sizeof(node));
    printf("Enter your advertisement !! \n");
    fgets(newNode->str , 100 , stdin) ;
    newNode->next = NULL ;
    //newNode->prev = NULL ;
    node* temp = head ;
    while(temp->next!=NULL)
        temp = temp->next ;
    newNode->prev = temp ;
    temp->next = newNode ; 
    return head ;
}
void display(node* head){
    node* temp = head ; 
    puts(temp->str);
    printf("enter n for next and p to view previous advertisements and enter e for exit :\n");
    char choice ; 
    scanf(" %c",&choice);
    getchar();
    if(choice == 'n' && temp->next!=NULL)
        display(temp->next) ;
    else if(choice == 'p' && temp->prev!=NULL)
        display(temp->prev) ;
    else if(choice == 'e')
        return;
}
void displayCLL(node* head){
    node* temp = head ;
    puts(temp->str);
    printf("enter n for next and p to view previous advertisements and enter e for exit :\n");
    char choice ;
    scanf(" %c",&choice);
    getchar();
    if(choice == 'n')
        displayCLL(temp->next) ;
    else if(choice == 'p')
        displayCLL(temp->prev) ;
    else if(choice == 'e')
        return;
}
int main() {
    printf("Enter 'a' for Doubly linked list and 'b' for circular linked list : \n ");
    char temp ;
    scanf(" %c",&temp) ;
    if(temp=='a'){
        node* head = NULL ;
        head = createDLL(head) ;
        printf("Would you like to add an ad to the linkedlist enter y/n : \n") ;
        char choice ;
        scanf(" %c",&choice);
        while(choice!='n'){
            head = push_back(head);
            printf("Would you like to add an ad to the linkedlist enter y/n : \n") ;
            scanf(" %c",&choice);
            getchar();
        }
        printf("Would you like to display the adverts ? y/n :\n") ;
        scanf(" %c",&choice);
        if(choice == 'y'){
            display(head);
        }
        return 0;
    }
    else if(temp=='b'){
        node* head = NULL ;
        head = createCLL(head);
        printf("Would you like to add an ad to the linkedlist enter y/n : \n") ;
        char choice ;
        scanf(" %c",&choice);
        while(choice!='n'){
            head = push_backCLL(head);
            printf("Would you like to add an ad to the linkedlist enter y/n : \n") ;
            scanf(" %c",&choice);
            getchar();
        }
        printf("Would you like to display the adverts ? y/n :\n") ;
        scanf(" %c",&choice);
        if(choice == 'y'){
            displayCLL(head);
        }
        return 0;
    }
}