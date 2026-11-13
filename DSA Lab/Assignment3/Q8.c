#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct book{
    struct book* lp ;
    char book_title[30]; 
    char author_name[20];
    int publication_year;
    struct book* rp ;
} book ;
book* push_back(book* s ,int num){
    book* newBook = (book*)malloc(sizeof(book));
    if(s==NULL){
        return newBook;
    }
    newBook->lp = NULL ;
    newBook->rp = NULL ;
    printf("Enter the Details of Book no.%d : \n",num) ;
    printf("Enter the book title : \n") ;
    fgets(newBook->book_title , 31 , stdin) ;
    printf("Enter the author name : \n") ;
    fgets(newBook->author_name , 21 , stdin) ;
    printf("Enter the publication year : \n") ;
    scanf("%d",&newBook->publication_year) ;
    getchar();
    book* temp = s ;
    while(temp->lp!=NULL)
        temp = temp->lp ;
    temp->lp = newBook ;
    newBook->rp = temp ;
    return s ;
}
book* delete(book* s , char str[31]){
    book* temp = s ;
    while(temp!=NULL && strcmp(temp->book_title,str)!=0)
        temp = temp->lp ;
    if(temp==NULL)
        return s ;
    if(temp->rp!=NULL)
        temp->rp->lp = temp->lp ;
    else
        s = temp->lp ;
    if(temp->lp!=NULL)
        temp->lp->rp = temp->rp;
    temp->lp = NULL ;
    temp->rp = NULL ;
    return s ;
book* create_Lib(book* s , int size){
    book* newBook = (book*)malloc(sizeof(book));
    newBook->lp = NULL ;
    newBook->rp = NULL ;
    printf("Enter the Details of Book no.1 : \n") ;
    printf("Enter the book title : \n") ;
    fgets(newBook->book_title , 31 , stdin) ;
    printf("Enter the author name : \n") ;
    fgets(newBook->author_name , 21 , stdin) ;
    printf("Enter the publication year : \n") ;
    scanf("%d",&newBook->publication_year) ;
    getchar();
    s = newBook ;
    for(int i = 2 ; i <= size ; i++){
        s = push_back(s,i);
    }
    return s ;
}
void display(book* s){
    book* temp = s ;
    char ch = 's';
    int i = 1 ;
    while(temp!=NULL && ch!='e'){
        printf("BOOK NO.%d : \n",i);
        printf("Title: %s | Author: %s | Publication Year: %d \n",temp->book_title,temp->author_name,temp->publication_year);
        printf("Would like to proceed forward (f) or backward (b) and (e) for exit ?? \n");
        scanf(" %c",&ch);
        if(ch == 'f' && temp->lp!=NULL){
            i++;
            temp = temp->lp ;
        }
        else if(ch == 'b' && temp->rp!=NULL){
            i--;
            temp = temp->rp ;
        }
    }
}
void search(book* s , char str[31]){
    book* temp = s;
    int i = 1 ;
    while(temp!=NULL){
        if(strcmp(temp->book_title,str)==0){
            printf("Found on the index : %d",i);
            return ;
        }
        temp = temp->lp ;
        i++ ;
    }
    printf("NO such book is present ! \n");
}
int main() {
    book* s = NULL ;
    int n ;
    char str[31];
    printf("Enter the number of books you wish to add : \n") ;
    scanf("%d",&n);
    getchar();
    s = create_Lib(s,n);
    display(s);
    printf("Enter the book title you wish to search : \n") ;
    fgets(str, 31 , stdin);
    str[strcspn(str,"\n")] = '\0';
    s = delete(s,str);
    search(s,str);
    return 0;
}