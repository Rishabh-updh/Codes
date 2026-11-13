#include <stdio.h>
int main() {
   int aadhar[5];
   //int *ptr = &aadhar[0];
   for(int i =0;i<5;i++){
    printf("Enter your AADHAR number : \n");
    scanf("%d",&aadhar[i]);
   }
   for(int j=0;j<5;j++){
    printf("%d \t",aadhar[j]);
   }
    return 0;
}