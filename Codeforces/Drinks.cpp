#include <iostream>
using namespace std;

int main() {
    int n ; 
    cin >> n ;
    float arr[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    float sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    float ans ; 
    ans = sum/n ;
    cout<<ans<<endl;
    return 0;
}