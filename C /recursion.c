#include<stdio.h> // sum of n natural number /
int add(int n);
int main(){
    int n;
    printf(" Enter a number :\n");
    scanf("%d",&n);
    printf("Sum is : %d \n",add(n));
    return 0;
}
int add(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = add(n-1);   // sum of 1 to n
    int sumN = sumNm1 +n;
    return sumN;    
}