#include<stdio.h>
int addition(int a, int b);
int main(){
  int a, b;
  printf("Enter the value of a : ");
  scanf(" %d", &a);
  printf("Enter the value of b : ");
  scanf(" %d", &b);
  int s = addition(a,b);
  printf("Sum of a & b is : %d \n", s);
  return 0;
    } 
    int addition(int a, int b){
       return a+b;
    }
    
   