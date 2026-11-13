#include <iostream>
using namespace std;

int main() {
    int t ; 
    cin>>t;
    int arr[t] , arrd[t];
    for(int i = 0 ; i < t ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < t ; i++){
        if(arr[i]>=33 and arr[i] % 33 == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}