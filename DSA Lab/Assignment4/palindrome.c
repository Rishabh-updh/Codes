#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node{
    int top;
    int capacity ;
    char stack[100];
} stack ;
void push(stack* s , int val){
    if(s->top==s->capacity-1){
        printf("Stack overflow!!\n");
        return ;
    }
    (s->top)++ ;
    (s->capacity)--;
    s->stack[s->top] = val ;
}
char pop(stack* s){
    if(s->top == -1){
        printf("Stack underflow !!\n");
        return '\0';
    }
    char popped ;
    popped = s->stack[(s->top)--];
    (s->capacity)++;
    return popped ;
}
int isPair(char a , char b){
    if(a==b) return 1 ;
    else return 0 ;
}
int isPND(stack*s , char str[100] ){
    // first find the length of this str ;
    int l = strlen(str) , i ;
    if(l%2==0){
        for(i = 0 ; i < l/2 ; i++)
            push(s , str[i]);
        char ch ;
        for(i = l/2 ; i < l ; i++){
            ch = pop(s);
            if(!isPair(ch,str[i])){
                return 0;
            }
        }
        return 1 ;
    }
    else{
        for(i = 0 ; i < l/2 ; i++)
            push(s , str[i]);
        char ch ;
        for(i =(l/2)+1 ; i < l ; i++){
            ch = pop(s);
            if(!isPair(ch,str[i])){
                return 0;
            }
        }
        return 1 ;
    }
}
int main() {
    stack* s = (stack*)malloc(sizeof(stack));
    s->top = -1 ;
    s->capacity = 100 ;
    char str[100] ;
    fgets(str,100,stdin) ;
    str[strcspn(str,"\n")] = '\0' ;
    if(isPND(s,str))
        printf("Yes is a palindrome !!\n");
    else
        printf("Not a palindrome !!\n");
    return 0;
}