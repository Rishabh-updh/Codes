#include <iostream>
using namespace std;
int funct(long long int n){
    if(n == 0) return 0 ;
    while(n!=0){
        int d = n%10;
        if(d!=4 and d!=7) return 0;
        n/=10;
    }
    return 1;
}
int main() {
    long long int n , counter = 0;
    cin>>n;
    int x = funct(n);
    while(n!=0){
        if(n%10 == 4 or n%10 == 7)
        counter++;
        n/=10;
    }
    int y = funct(counter);
    if(y==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}