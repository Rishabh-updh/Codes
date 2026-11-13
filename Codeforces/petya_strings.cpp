#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[101] , s2[101];
    cin>>s1>>s2;
    int l = strlen(s1);
    for(int i = 0 ; i < l ; i++){
        if(s1[i]<=90 && s1[i]>=65)
        s1[i]+=32;
        if(s2[i]<=90 && s2[i]>=65)
        s2[i]+=32;
    }
    int x = strcmp(s1,s2);
    int c = 0;
    if(x<0) c = -1 ;
    else if(x>0) c = 1 ;
    else if(x==0) c = 0 ;
    
    cout<<c<<endl;
    return 0;
}