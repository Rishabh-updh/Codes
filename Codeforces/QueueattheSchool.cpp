#include <iostream>
#include <cstring>
using namespace std;
void swap(char *x , char *y){
    char temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int n , t ;
    cin>>n>>t;
    char str[n+1];
    cin>>str;
    for(int i = 0 ; i < t ; i++){
        for(int j = 0 ; j < n ; ){
            if(str[j]<str[j+1]){
                swap(&str[j],&str[j+1]);
                j+=2;
            }
            else j++;
        }
    }
    cout<<str<<endl;
    return 0;
}