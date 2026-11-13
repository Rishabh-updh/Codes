#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;
    char str[n+1];
    cin >> str ;
    for(int i = 0 ; i <= n ; i++){
        if(str[i] >= 65 && str[i] <= 90) str[i]+=32;
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        int j;
        for(j = 0 ; j < i ; j++) {
            if (str[i] == str[j]) break;
        }
        if (j == i) count++;
    }
    if(count>=26) cout << "YES" << endl;
    else if(count<26) cout << "NO" << endl;
    return 0;
}