#include <stdio.h>
void multi(int a, int b, int *sum, int *prod,int *avg);
int main() {
    int a=3;
    int b=5;
    int sum,prod,avg;
    // scanf("%d ",a);
    // scanf("%d ",b);
    multi(a,b,&sum ,&prod, &avg);
    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    
    return 0;
}
void multi(int a, int b, int* sum, int* prod,int* avg){
    *sum = a+b;
    *prod =a*b;
    *avg = (a+b)/2;
//     printf("The sum of the two number = %d \n", sum);
//     printf("The product of the two number = %d \n", prod);
//     printf("The average of the two number = %d \n", avg);
 }