#include<iostream>
#include<string>
using namespace std;
int main(){
    int n , x = 0; 
    cin>>n;
    string add1 = "++X" , add2 = "X++" , sub1 = "--X" , sub2 = "X--";
    string op[n];
    for(int i = 0 ; i < n ; i++){
        cin>>op[i];
        if(op[i]==add1 || op[i]==add2) x++;
        else if(op[i]==sub1 || op[i]==sub2) x--;
    }
    cout<<x<<endl;
    return 0;
}