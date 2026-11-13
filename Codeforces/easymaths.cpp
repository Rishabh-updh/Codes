#include <iostream>
#include <cstring>
using namespace std;
void swap(char *x , char *y){
    char temp = *x;
    *x=*y;
    *y=temp;

}
void sort(int n , char str[]){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(str[j]>str[j+1])
            swap(&str[j],&str[j+1]);
        }
    }
}
int plusremove(int n , char str[]){
    int index = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(str[i]=='+'){
            str[i]='0';
            index++;
        }
    }
    return index;
}
int main() {
    char str[101];
    cin>>str;
    int n = strlen(str);
    for(int i = 0 ; i < n ; i++){
        
    }
    int x = plusremove(n , str);
    sort(n , str);
    for(int i = x ; i < n ; i++){
        cout<<str[i];
        if(i!=n-1)cout<<"+";
    }
    cout<<endl;
    return 0;
}