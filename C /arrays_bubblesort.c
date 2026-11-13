#include <stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void BubbleSort(int arr[],int n){
    // in bubble sort the loop runs for n-1 times !!
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
        }
    }
}
int main() {
    int n=5;
    int arr[]={4,1,5,2,3};
    //display(arr,5);
    BubbleSort(arr,5);
    display(arr,5);
    return 0;
}