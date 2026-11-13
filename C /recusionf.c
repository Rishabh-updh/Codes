#include<stdio.h>
int fac( int n);
int main(){
    int n;
    printf(" Enter a number :\n");
    scanf("%d",&n);
    printf("The factorial is : %d \n",fac(n));
    return 0;
}
int fac(int n){
    if (n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    int facNm1 = fac(n-1);
    int facN =facNm1*n;
    return facN;

}