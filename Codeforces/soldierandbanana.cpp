#include <iostream>
using namespace std;

int main() {
    int k , n , w , sumN = 0 , need = 0 ;
    cin>>k>>n>>w;
    for(int i = 1 ; i <= w ; i++){
        sumN+=(i*k);
    }
    need = sumN-n;
    if(n >= sumN ) cout<<"0"<<endl;
    if(n<sumN) cout<<need<<endl;
    return 0;
}