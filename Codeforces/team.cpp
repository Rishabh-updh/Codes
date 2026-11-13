#include<iostream>
using namespace std;
typedef struct team{
    int Petya , Vasya , Tonya ;
}t;
int main(){
    int n ,counter = 0;
    cin>>n;
    t question[n];
    for(int i = 0 ; i < n ; i++){
        cin>>question[i].Petya>>question[i].Vasya>>question[i].Tonya;
    }
    for(int i = 0 ; i < n ; i++){
        int sum = question[i].Petya+question[i].Vasya+question[i].Tonya;
        if(sum>=2) counter++;
    }
    cout<<counter<<endl;
    return 0;
}