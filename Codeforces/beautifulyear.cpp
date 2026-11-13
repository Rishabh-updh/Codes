#include <iostream>
using namespace std;
int func(int n){
    int r0 , r1 , r2 , r3 ;
    r0 = n%10;
    n/=10;
    r1 = n%10;
    n/=10;
    r2 = n%10;
    n/=10;
    r3 = n%10;
    if(r0!=r1 && r0!=r2 && r0!=r3 && r1!=r2 && r1!=r3 && r2!=r3) return 0 ; 
    else return 1 ;
}
int main() {
    int y ;
    cin>>y;
    ++y;
    while(func(y)){
        ++y;
    }
    cout<<y<<endl;
    return 0;
}