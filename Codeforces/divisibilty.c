#include <stdio.h>
int main() {
    int n,counter=0;
     scanf("%d",&n);
     int arr[n][2];
     int arr_1[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<1;j++){
        scanf("%d %d",&arr[i][j],&arr[i][j+1]);
        }
        int j=0;
    do{
        if(arr[i][j]%arr[i][j+1]==0){
            arr_1[i]=0;
            break;
        }
        arr[i][j]++;
        counter++;
        arr_1[i]=counter;
        
    }while(arr[i][j]%arr[i][j+1]!=0);
        counter=0;
}
    for(int i=0;i<n;i++){
        printf("%d\n",arr_1[i]);
    }
    return 0;
}