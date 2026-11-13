#include <iostream>
using namespace std;

int main() {
    string s0 , s1 ;
    cin>>s0>>s1;
    if(s0.length() != s1.length()){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = 0 ; i < s0.length() ; i++){
        if(s0[i]!=s1[s0.length()-i-1]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}