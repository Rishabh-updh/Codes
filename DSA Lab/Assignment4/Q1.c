#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data ;
    struct node* next;
    struct node* prev;
} node;
node* createDLL(node*head , int val){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val ;
    newNode->next = NULL ;
    newNode->prev = NULL ;
    head = newNode;
    return head ;
}
node* push_back(node*head ,int val){
    if(head==NULL){
        head = createDLL(head,val);
        return head ;
    }
    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL ;
    newNode->data = val ;
    node* temp = head ;
    while(temp->next!=NULL)
        temp = temp->next ;
    newNode->prev = temp ;
    temp->next = newNode ;
    return head ;
}
node* push_front(node*head ,int val){
    if(head==NULL){
        head = createDLL(head,val);
        return head ;
    }
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val ;
    newNode->next = head ;
    head->prev = newNode ;
    newNode->prev = NULL ;
    head = newNode;
    return head ;
}
node* pop_front(node*head){
    if(head==NULL)
        return head ;
    if(head->next==NULL){
        free(head);
        return NULL ;
    }
    node* temp = head ;
    head = head->next;
    head->prev = NULL ;
    free(temp);
    return head ;
}
node* pop_back(node*head){
    if(head==NULL)
        return head ;
    if(head->next==NULL){
        free(head);
        return NULL ;
    }
    node* temp = head ;
    while(temp->next->next!=NULL)
        temp = temp->next;
    node* toDelete = temp->next ;
    temp->next = NULL ;
    free(toDelete);
    return head ;
}
node* insertBEFORE(node*head , node* target , int val){
    if(target==NULL)
        return head ;
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val ;
    newNode->prev = target->prev;
    newNode->next = target;
    if(target->prev!=NULL)
        target->prev->next = newNode;
    else
        head = newNode;
    target->prev = newNode;
    return head;
}
node* insertAFTER(node*head , node* target , int val){
    if(target==NULL)
        return head ;
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = val ;
    newNode->next = target->next;
    newNode->prev = target;
    if(target->next!=NULL)
        target->next->prev = newNode;
    target->next = newNode;
    return head;
}
node* delete(node* head , int index){
    if(head==NULL)
        return head ;
    node* temp = head ;
    for(int i = 0 ; i < index ; i++)
        temp = temp->next;
    if(temp->prev!=NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;
    if(temp->next!=NULL)
        temp->next->prev = temp->prev;
    free(temp);
    return head ;
}
node* deleteNode(node* head , node* target){
    if(head==NULL || target==NULL)
        return head ;
    if(target->prev!=NULL)
        target->prev->next = target->next;
    else
        head = target->next;
    if(target->next!=NULL)
        target->next->prev = target->prev;
    free(target);
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
void displayReverse(node* head){
    if(head==NULL)
        return ;
    node* temp = head;
    while(temp->next!=NULL)
        temp = temp->next;
    while(temp!=NULL){
        printf("%d <--> ",temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}
int main(void){
    node* h1 = NULL;
    int n , temp ;
    printf("Enter the size of your doubly linked list : \n");
    scanf("%d",&n);
    printf("Enter the elements of the linked lists : \n");
    scanf("%d",&temp);
    h1 = createDLL(h1,temp);
    for(int i = 0 ; i < n-1 ; i++){
        scanf("%d",&temp);
        h1 = push_back(h1,temp);
    }
    display(h1);
    node* second = h1->next ;
    h1 = insertBEFORE(h1, second, 99);
    h1 = insertAFTER(h1, second, 100);
    display(h1);
    h1 = pop_back(h1);
    display(h1);
    h1 = pop_front(h1);
    display(h1);
    h1 = delete(h1,2);
    display(h1);
    displayReverse(h1);
}