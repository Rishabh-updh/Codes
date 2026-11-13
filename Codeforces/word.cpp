#include <iostream>
#include <cstring>
using namespace std;
int counter(char str[] , int n){
    int counterU = 0 , counterL = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(str[i]>=65&&str[i]<=90)counterU++;
        else if(str[i]>=97&&str[i]<=122)counterL++;
    }
    if(counterU>counterL) return 1;
    else return 0;
}
void tolower(char str[] , int n){
    for(int i = 0 ; i < n ; i++){
        if(str[i]>=65&&str[i]<=90)
        str[i]+=32;
    }
}
void toupper(char str[] , int n){
    for(int i = 0 ; i < n ; i++){
        if(str[i]>=97&&str[i]<=122)
        str[i]-=32;
    }
}
int main() {
    char str[101];
    cin>>str;
    int n = strlen(str);
    int x = counter(str,n);
    if(x){
        toupper(str,n);
    }
    else{
        tolower(str,n);
    }
    cout<<str<<endl;
    return 0;
}