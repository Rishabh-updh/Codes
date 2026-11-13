#include <iostream>
using namespace std;

int main() {
    int n , h , sum = 0 ; 
    cin>>n>>h;
    int arr0[n], arr1[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr0[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(arr0[i]>h) arr1[i] = 2 ;
        else if(arr0[i]<=h) arr1[i] = 1 ;
    }
    for(int i = 0 ; i < n ; i++){
        sum+=arr1[i];
    }
    cout<<sum<<endl;
    return 0;
}