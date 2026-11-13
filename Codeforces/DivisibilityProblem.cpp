#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    long long data[n][2] , ans[n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin >> data[i][j] ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(data[i][1] > data[i][0]){
            ans[i] = data[i][1] - data[i][0] ;
            continue ;
        }
        long long temp = data[i][0] % data[i][1];
        if(temp==0) ans[i] = 0 ;
        else if(temp!=0){
            ans[i] = data[i][1]-temp;
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}