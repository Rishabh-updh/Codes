#include <iostream>
using namespace std;

int main() {
    int n , c1 = 0 , c2 = 0 , c3 = 0 , c5 = 0 , s = 0 ;
    cin>>n;
    c5 = n/5;
    n%=5;
    c3=n/3;
    n%=3;
    c2=n/2;
    n%=2;
    c1=n;
    s = c1+c2+c3+c5;
    cout<<s<<endl;
    return 0;
}