#include <iostream>
using namespace std;

int main() {
    int n , k , rem = 0 ;
    cin>>n>>k;
    for(int i = 0 ; i < k ; i++){
        rem = n%10;
        if(rem==0) n/=10;
        else if(rem!=0) n-=1;
    }
    cout<<n<<endl;
    return 0;
}