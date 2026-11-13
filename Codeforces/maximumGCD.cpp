#include <iostream>
using namespace std;
int main() {
    int t ; 
    cin >> t ;
    long long arr0[t];
    for(int i = 0 ; i < t ; i++){
        cin >> arr0[i] ;
        cout<< arr0[i]/2 << endl;
    }
    return 0;
}