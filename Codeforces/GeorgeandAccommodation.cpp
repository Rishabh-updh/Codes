#include <iostream>
using namespace std;

int main() {
    int n ; 
    cin>>n;
    int arr[n][2] , counter = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin>>arr[i][j];
        }
        if(arr[i][1] - arr[i][0] >= 2) counter++;
    }
    cout<<counter<<endl;
    return 0;
}