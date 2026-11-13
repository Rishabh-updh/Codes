#include <iostream>
using namespace std;
int minimum(int x , int y){
    int z ;
    if(x > y) z = y ;
    else if(x < y) z = x ;
    return z ;
}
int main() {
    int t ; 
    cin >> t;
    int**data =  new int*[t] ;
    int arr[t] , arrA[t][2] ;
    for(int i = 0 ; i < t ; i++){
        cin >> arr[i];
        data[i] = new int[2*arr[i]];
        int counter0 = 0 , counter1 = 0 , min = 0 , max = 0 ;
        for(int j = 0 ; j < 2*arr[i] ; j++){
            cin >> data[i][j];
            if(data[i][j] == 0 ) counter0++;
            else if(data[i][j] == 1 ) counter1++;
        }
        if(counter0==counter1){
            max = arr[i];
            if(counter0 % 2 == 0 ) min = 0 ;
            else if(counter0 % 2 != 0 ) min = 1 ;
            arrA[i][0] = min;
            arrA[i][1] = max;
        }
        else if(counter0 != counter1){
            int x = minimum(counter0 , counter1);
            max = x ;
            if(counter0 % 2 == 0) min = 0 ;
            else if(counter1 % 2 != 0) min = 1 ;
            arrA[i][0] = min;
            arrA[i][1] = max;
        }
    }
    for(int i = 0 ; i < t ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cout<<arrA[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < t ; i++){
        delete[] data[i] ;
    }
    delete[] data;
    return 0;
}