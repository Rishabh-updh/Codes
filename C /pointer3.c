#include <stdio.h> 
void square(int n);
void _square(int* n);
int main() {
    int number = 4;
    square(number);
    printf("Number = %d \n",number);
    _square(&number); // number ka address diya 
    printf("Number = %d \n",number);
    return 0;
}
// function call by value
void square(int n){
    n=n*n;
    printf("The square of the number is : %d \n",n);
}
// function call my reference
void _square(int* n){
    *n=(*n)*(*n);
    printf("The square of the number is : %d \n",*n);
}