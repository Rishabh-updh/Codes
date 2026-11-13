#include <iostream>
using namespace std;

int main() {
    string n1 , n2  ;
    cin>>n1>>n2;
    int x = n1.length();
    char ans[x];
    for(int i = 0 ; i < x ; i++){
        if(n1[i]!=n2[i]) ans[i]='1';
        else if (n1[i]==n2[i]) ans[i]='0';
    }
    for(int i = 0 ; i < x ; i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}