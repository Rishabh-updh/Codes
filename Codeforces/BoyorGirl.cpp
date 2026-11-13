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
int removedulpicates(int n , char str[]){
    int index = 0;
    for(int i = 0 ; i < n ; i++){
        if(str[i]==str[i+1]){
            str[i] = '0' ;
            index++;
        }
    }
    return index;
}
int main() {
    int len = 0 ;
    char str[101];
    cin>>str;
    len = strlen(str);
    sort(len , str);
    //cout<<str<<endl;
    int x = removedulpicates(len,str);
    sort(len , str);
    //cout<<str<<endl;
    char strc[len-x+1];
    int k = 0 ;
    for(int i = x ; i < len+1 ; i++){
        strc[k] = str[i];
        k++;
    }
    //cout<<strc<<endl;
    int y = strlen(strc);
    if(y%2!=0)
    cout<<"IGNORE HIM!"<<endl;
    else if(y%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    return 0;
}