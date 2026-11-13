#include <stdio.h>
int main(){
int n,_switch=0;
long long int sum=0;
scanf("%d",&n);
long long int arr[n];
for(int i=0;i<n;i++){
    scanf("%lld",&arr[i]);
}
for(int j=0;j<n;j++){
    if(_switch==1&&arr[j]%2==0){
        sum=sum+arr[j];
    }
    else if(arr[j]%2!=0){
         sum=sum+arr[j];
         _switch=1;
    }
    else{
        continue;
    }
}
printf("%lld \n",sum);
    return 0;
}