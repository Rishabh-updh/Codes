#include <stdio.h>
void display(int arr[],int n){
    for(int i= 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void swap(int *x,int *y){
    int temp=*y;
    *y=*x;
    *x=temp;
}
void sortArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int LargestIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[LargestIndex])
            LargestIndex=j;
        }
        swap(&arr[i],&arr[LargestIndex]);
    }

}
int main() {
    int n=5;
    int arr[]={4,1,5,2,3};
    sortArray(arr,n);
    display(arr,n);
    return 0;
}