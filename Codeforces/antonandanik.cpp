#include <iostream>
using namespace std;

int main() {
    int n , counterA = 0 , counterD = 0 ; 
    cin>>n;
    string str ; 
    cin>>str;
    for(int i = 0 ; str[i] != 0 ; i++){
        if(str[i]=='A') counterA++;
        else if(str[i]=='D') counterD++;
    }
    if(counterA > counterD) cout<<"Anton"<<endl;
    if(counterA < counterD) cout<<"Danik"<<endl;
    if(counterA == counterD) cout<<"Friendship"<<endl;
    return 0;
}