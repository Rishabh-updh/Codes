#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n , m , a ;
    cin>>n>>m>>a;
    double x , y ;
    long long n_l , n_b ;
    x = (double)n/a;
    n_l = ceil(x);
    y = (double)m/a;
    n_b = ceil(y);
    cout<<(n_l*n_b)<<endl;
    return 0;
}