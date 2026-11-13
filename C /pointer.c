#include<stdio.h>
int main(){
    int x;
    int *ptr; // created a pointer
    ptr=&x;  //means pointer ko x ka address diya 
    *ptr=0; //x=0
    printf("x= %d \n",x);
    printf("*ptr= %d \n",*ptr);
    *ptr+=5;
    printf("x= %d \n",x);
    printf("*ptr= %d \n",*ptr);
    (*ptr)++; // pointer pe jo value hai wo increment ho rahi hai
    printf("x= %d \n",x);
    printf("*ptr= %d \n",*ptr);
    return 0;
}