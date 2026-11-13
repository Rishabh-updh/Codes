#include <iostream>
using namespace std;
int main() {
    int t ; 
    cin >> t ;
    long long**data = new long long*[t];
    int arr[t] ;
    long long arrA[t]; 
    for(int i = 0 ; i < t ; i++){
        int counter = 0 ;
        cin >> arr[i];
        data[i] = new long long[arr[i]];
        for(int j = 0 ; j < arr[i] ; j++){
            cin >> data[i][j] ;
            while(data[i][j]%2==0){
                data[i][j]/=2 ;
                counter++;
            }
        }
        long long max = LLONG_MIN , maxi = 0 ;
        for(int k = 0 ; k < arr[i] ; k++){
            if(data[i][k] > max){
                max = data[i][k];
                maxi = k ;
            }
        }
        for(int z = 0 ; z < counter ; z++){
            data[i][maxi]*=2;
        }
        long long sum_i = 0 ;
        for(int y = 0 ; y < arr[i] ; y++){
            sum_i+=data[i][y];
        }
        arrA[i] = sum_i ;
    }
    for(int i = 0 ; i < t ; i++){
        cout << arrA[i]<<endl;
    }
    for(int i = 0 ; i < t ; i++){
        delete[] data[i] ;
    }
    delete[] data;
    return 0;
}