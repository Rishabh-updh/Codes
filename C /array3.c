#include <stdio.h>

int main() {
    int n;
    int counter=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("\n");
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            counter++;
        }
    }
   printf("%d \n",counter);
    return 0;
}