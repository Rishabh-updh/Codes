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
void SelectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int Smallestindex=i;            //Assume karlo ki smallest index hai i=0 pe jo bhi value padi hui hai !! and assign bhi kardo smallestindex = i !!
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[Smallestindex]){
            Smallestindex=j;
            }
        }
        swap(&arr[i],&arr[Smallestindex]);
    }
}

int main() {
    int n=5;
    int arr[]={4,1,5,2,3};
    SelectionSort(arr,5);
    display(arr,5);
    return 0;
}