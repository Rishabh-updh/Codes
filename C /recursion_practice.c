#include <stdio.h>
int sumN(int n){
    if (n==1) return 1 ;
    return n + sumN(n-1);
}
int reverseNum(int n, int r) {
   if(n==0) return 0;
   return (r*10 + reverseNum(n/10,n%10));
}

int sumFactorsHelper(int n , int i ){
    if(i > n/2) return 0 ;
    return(n%i==0?i:0)+sumFactorsHelper(n,i+1);
}
int isPerfect(int n){
    if(n<=1) return 0 ;
    return sumFactorsHelper(n,1) == n ;
}
int factorial(int n){
    if(n<0) return -1 ; // invalid input 
    if(n==1 || n==0) return 1 ; // base case ;
    return n*factorial(n-1);
}
int main() {
    // int sum = 0 , n = 123;
    // printf("%d ", reverseNum(123,0));
    // for (int i = 0 ; i < 3 ; i++){
    //     int rem = n%10;
    //     sum = sum*10 + rem;
    //     n/=10;
    // }
    // isPerfect(496)==1 ? printf("YES") : printf("NO") ;
    printf("%d \n",factorial(5));
    return 0;
}