#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct stack{
    char stack[100] ;
    int top ;
    int capacity ;
} stack ;
void push(stack* s , char val){
    s->top++;
    s->capacity--;
    if(s->capacity==0){
        printf("StackOverflow\n");
        return ;
    }
    s->stack[s->top] = val ;
}
char pop(stack* s ){
    char popped = s->stack[s->top];
    s->top--;
    s->capacity++;
    return popped;
}
int isMatching(char open , char close){
    if(open == '(' && close == ')') return 1;
    if(open == '{' && close == '}') return 1;
    if(open == '[' && close == ']') return 1;
    return 0;
}
int isBalanced(stack* s , char temp[100]){
    char popped ;
    for(int i = 0 ; temp[i]!='\0' ; i++){
        if(temp[i]=='('||temp[i]=='['||temp[i]=='{')
            push(s,temp[i]);
        else if(temp[i]==')'||temp[i]==']'||temp[i]=='}'){
            popped = pop(s);
            if(!isMatching(popped,temp[i]))
                return 0 ;
        }
    }
    if(s->top == -1)
        return 1;
    else
        return 0;
}
int main() {
    stack* s = (stack*)malloc(sizeof(stack));
    s->top = -1 ;
    s->capacity = 100 ;
    char temp[100] ;
    fgets(temp , 100 , stdin) ;
    temp[strcspn(temp,"\n")] = '\0';
    if(isBalanced(s,temp))
        printf("Balanced\n");
    else
        printf("Not balanced\n");
    return 0;
}