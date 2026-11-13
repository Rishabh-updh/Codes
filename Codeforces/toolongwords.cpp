#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str[n];
    for(int i = 0 ; i < n ; i++){
        cin>>str[i];
    }
    for(int i = 0 ; i < n ; i++){
        int l = str[i].length();
        if(l<=10) continue;
        char ch1 = str[i][0];
        char ch2 = str[i][l-1];
        l-=2;
        string len = to_string(l);
        str[i] = ch1 + len ;
        str[i].push_back(ch2);
    }
    for(int i = 0 ; i < n ; i++){
        cout<<str[i]<<endl;
    }
    return 0;
}