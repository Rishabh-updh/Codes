#include <iostream>
using namespace std;

int main() {
    int n , index , counter = 0;
    cin>>n>>index;
    int arr[n+1];
    for(int i = 1 ; i < n+1 ; i++){
        cin>>arr[i];
    }
    for(int i = 1 ; i < n+1 ; i++){
        if(arr[i]>=arr[index] and arr[i]!= 0)
        counter++;
    }
    cout<<counter<<endl;
    return 0;
}