#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
	int arr[100] , top , capacity ;
} stack ;
void push(stack* s , int val){
	(s->top)++ ;
	s->arr[s->top] = val ;
	(s->capacity)-- ;
}
void display(stack* s){
	for(int i = s->top ; i >= 0 ; i--){
		printf("    %d\n",s->arr[i]);
		if(i!=0){
			printf("    |\n");
			printf("    v\n");
		}
	}
}
void pop(stack* s){
	(s->top)-- ;
	(s->capacity)++;
}
void peek(stack* s){
	printf("--- %d ---\n",s->arr[s->top]);
}
int main(void){
	stack* s1 = (stack*)malloc(sizeof(stack));
	s1->top =-1 ;
	s1->capacity = 100 ;
	push(s1,1);
	push(s1,2);
	push(s1,3);
	push(s1,4);
	push(s1,5);
	push(s1,6);
	//display(s1);
	pop(s1);
	display(s1);
	//peek(s1);
}
