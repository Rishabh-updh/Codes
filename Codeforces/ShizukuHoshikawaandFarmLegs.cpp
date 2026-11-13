#include <iostream>
using namespace std;
int main() {
    int t ;
    cin>>t;
    int arr[t] , arr0[t];
    for(int i = 0 ; i < t ; i++)
        cin>>arr[i];
    for(int i = 0 ; i < t ; i++){
        if(arr[i]%2!=0){
            arr0[i] = 0;
            continue;
        }
        int counter = 0 ;
        for(int x = 0 ; x <= arr[i]/2 ; x++){
            int y = (arr[i] - (2*x))%4;
            if(y==0) counter++;
        }
        arr0[i]=counter;
    }
    for(int i = 0 ; i < t ; i++)
        cout<<arr0[i]<<endl;
    return 0;
}