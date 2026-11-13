#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct stack{
    int top ; 
    char stack[100] ;
} stack ;
char peek (stack* s){
    if(s->top ==-1){
        printf("Empty stack !!\n");
        return '\0';
    }
    else
        return s->stack[s->top];
}
char pop (stack*s){
    char ch ;
    if(s->top ==-1){
        printf("Empty stack !!\n");
        return '\0';
    }
    else
        ch = s->stack[s->top];
        (s->top)--;
    return ch ;

}
void push(stack* s, char val){
    if(s->top == 99){
        printf("Stack overflow!!!\n");
        return ;
    }
    s->stack[++(s->top)] = val ;
}
char precedence(char b, stack*s){
    char a = peek(s);
    // Rule.1 = if incoming > peek(s) simply push 
    if((a =='+'||a =='-') && (b == '/'||b == '*'||b == '^')){
        push(s,b);
    }
    else if((a =='/'||a =='*') && (b == '^')){
        push(s,b);
    }
    else if(b =='^'){
        push(s,b);
    }

    //  Rule.2 = if incoming < peek(s) pop till precedence is same 

    else if((a =='^') && (b == '/'||b == '*'||b == '+')||b ==  '-'){
        
    }
    else if((a =='/'||a =='*') && (b == '^')){
        push(s,b);
    }
    else if(b =='^'){
        push(s,b);
    }
}
void infix_to_postfix(char str[100] , stack* s){
    for(int i = 0 ; i < strlen(str) ; i++){
        if(str[i]=='('||str[i]==')'||str[i]=='^'||str[i]=='*'||str[i]=='/'||str[i]=='+'||str[i]=='-'){
            if(peek(s)=='\0')
                push(s,str[i]);
            else continue ;
        }
        else
            printf("%c",str[i]);
    }
    printf("\n");
}
int main() {
    stack* s ;
    char str[100] ;
    printf("Enter the infix expression : \n");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]= '\0';

    return 0;
}