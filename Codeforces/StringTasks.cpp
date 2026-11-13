#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[200];
    fgets(str,102,stdin);
    int x = strlen(str);
    for(int i = strlen(str) ; i >= 0 ; i--){
        if(str[i]== 'A'|| str[i]== 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'|| str[i] == 'Y' || str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'y' ){
            for(int j = i ; j < strlen(str) ; j++)
                str[j]=str[j+1];
            x--;
        }
        else{
            if(str[i]>=65 && str[i]<=90)
                str[i]+=32;
        }
    }
    for(int i = 0 ; i < x-1 ; i++){
        cout<<"."<<str[i];
    }
    cout<<endl;
    return 0;
}