#include <iostream>
using namespace std;

int main() {
    int n ; 
    cin >> n ;
    int arr[n+1] , arrA[n+1];
    for(int i = 1 ; i < n+1 ; i++){
        cin >> arr[i];
    }
    bool x = true ;
    while(x){
        static int y = 1  , index = 1 ;
        for(int i = 1 ;i < n+1 ; i++){
            if(y > n) x = false ;
            if(arr[i]== y){ 
                arrA[index] = i ;
                index++;
                y++;
            }    
        }
    }
    for(int i = 1 ; i < n+1 ; i++)
    cout<<arrA[i]<<" " ;
    cout<<endl;
    return 0;
}