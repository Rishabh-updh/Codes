#include <iostream>
using namespace std;
void swap(long long * x , long long * y){
    long long temp = *x ;
    *x = *y;
    *y = temp;
}
void sort(long long arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
        }
    }
}
int func(long long arr[] , int n){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        int j;
        for(j = 0 ; j < i ; j++) {
            if (arr[i] == arr[j]) break;
        }
        if (j == i) count++;
    }
    return count;
}
int main() {
    int counter = 0 ;
    long long colour[4] ;
    for(int i = 0 ; i < 4 ; i++){
        cin>>colour[i];
    }
    sort(colour , 4);
    int x = func(colour , 4);
    cout<<4-x<<endl;
    return 0; 
}
