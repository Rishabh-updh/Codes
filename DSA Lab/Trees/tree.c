#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int key ;
    struct node* left ;
    struct node* right ;
} node ;
node* createNode (int value){
    node* newNode = (node*)malloc(sizeof(node)) ;
    newNode->key = value ;
    newNode->left = NULL ;
    newNode->right = NULL ;
    return newNode ;
}
node* insert(node* root , int value){
    if(root==NULL)
        return createNode(value);
    if(value < root->key)
        root->left = insert(root->left , value) ;
    else if(value > root->key)
        root->right = insert(root->right , value) ;
    return root ;
}
void inorder(node* root){ // (left , root , right)
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->key);
        inorder(root->right);
    }
}
void preorder(node* root){ // (root , left , right)
    if(root!=NULL){
        printf("%d ",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node* root){ // (left , right , root)
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->key);
    }
}
node* search(node* root , int value){
    if(root==NULL || root->key == value)
        return root ;
    if(root->key < value)
        return search(root->right , value) ;
    else if(root->key > value)
        return search(root->left , value) ;
}
int findMin(node* root){
    if(root==NULL){
        printf("Tree is empty !! \n") ;
        return -1 ;
    }
    node* current = root ;
    while(current->left!=NULL){
        current = current->left ;
    }
    return current->key ;
}
int findMax(node* root){
    if(root==NULL){
        printf("Tree is empty !! \n") ;
        return -1 ;
    }
    node* current = root ;
    while(current->right!=NULL){
        current = current->right ;
    }
    return current->key ;
}
node* HelpfindMin(node* root){
    while(root->left!=NULL)
        root = root->left ;
    return root ;
}
node* deletion(node* root , int key ){
    if(root == NULL)
        return NULL ;
    else if(key > root->key)
        root->right = deletion(root->right , key) ;
    else if(key < root->key)
        root->left = deletion(root->left , key) ;
    else {
        if(root->left == NULL && root->right == NULL){// leaf node
            free(root);
            return NULL ;
        }
        else if (root->left == NULL){
            node* temp = root->right ;
            free(root);
            return temp ;
        }
        else if (root->right == NULL){
            node* temp = root->left ;
            free(root);
            return temp ;
        }
        else {
            node* temp = HelpfindMin(root->right);
            root->key = temp->key ;
            root->right = deletion(root->right , temp->key);
        }
    }
    return root ;
}
int main() {
    node* root = NULL ;
    printf("Enter the value of the first node : \n") ;
    int x ;
    scanf("%d",&x) ;
    root = createNode(x) ; 
    //char choice = 'y' ;
    while(x!=-1){
        printf("Enter the next value : \n") ;
        scanf("%d",&x);
        if(x!=-1)
            root = insert(root , x);
    }
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    printf("Enter the element you wish to search : \n") ;
    scanf("%d",&x);
    node* target = search(root,x);
    printf("%d \n",target->key);
    printf("Enter the node you wish to delete : \n");
    scanf("%d",&x);
    root = deletion(root , x);
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    return 0;
}