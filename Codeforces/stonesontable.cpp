#include <iostream>
using namespace std;

int main() {
    int n ,counter = 0; 
    cin>>n;
    char str[n+1];
    cin>>str;
    for(int i = 0 ; i < n ; i++){
        if(str[i]==str[i+1])counter++;
    }
    cout<<counter<<endl;
    return 0;
}