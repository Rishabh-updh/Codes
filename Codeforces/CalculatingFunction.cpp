#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n , sum = 0 ;
    cin>>n;
    if(n%2==0){
        long long x = n/2 ;
        sum = (x)*(x+1) - (x * x);
    }
    else if(n%2!=0){
        long long x = n/2 ;
        sum = (x)*(x+1) - ((x+1)*(x+1));
    }
    cout<<sum<<endl;
    return 0;
}