#include <stdio.h>
int main() {
    int a= 0,b=1,n,next;
    printf("Enter the number of terms you want your fibonaci sequence : \n");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("%d  %d \t",fib[0],fib[1]);
   // int arr[n];
   for(int i =2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d \t",fib[i]);
    }
    // printf("\n")

    // for(int i =1;i<=n;i++){
    //     printf("%d  ",a);
    //     printf("%d  ",b);
    //     a=a+b;
    //     next=a+b;
    //     b=next;
    // }
    // printf("\n");
    // for(int i=0;i<n;i++){
    //     printf("%d  ",arr[i]);
    // }
    return 0;
}