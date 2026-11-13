#include <iostream>
using namespace std;

int main() {
    int n , pass = 0 ;
    cin>>n;
    int arr[n][2];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin>>arr[i][j];
        }
    }
    int max = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        pass = ( pass - arr[i][0] ) + arr[i][1] ;
        if(pass > max) max = pass ;
    }
    cout<<max<<endl;
    return 0;
}