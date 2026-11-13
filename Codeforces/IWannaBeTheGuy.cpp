#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int data[2*n];
    for(int i = 0 ; i < 2*n ; i++)
        data[i] = 0 ;
    // for(int i = 0 ; i < 2*n ; i++)
    //     cout << data[i] << endl ;
    for(int i = 0 ; i < 2*n ; i++){
        cin >> data[i] ;
        if(data[i]=='\n') break ;
    }
    int count = 0;
    for(int i = 0 ; i < 2*n ; i++){
        int j;
        for(j = 0 ; j < i ; j++) {
            if (data[i] == data[j]) break;
        }
        if (j == i) count++;
    }
    cout << count << endl ;
    return 0;
}