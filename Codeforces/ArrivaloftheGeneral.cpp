#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    int max = arr[0] , min = arr[0] , indexMax = 0 , indexMin = 0 ;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            indexMax = i;
        }
        if(arr[i] <= min){
            min = arr[i];
            indexMin = i;
        }
    }
    int time = indexMax + (n - 1 - indexMin) ;
    if(indexMax > indexMin) time--;
    cout << time << endl;
    return 0;
}