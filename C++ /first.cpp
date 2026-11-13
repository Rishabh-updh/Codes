#include <iostream>
using namespace std;
int nCr(int n, int r){
   int num=1,den_1=1,den_2=1;
   for(int i=1;i<=n;i++){
      num*=i;
   }
   for(int i=1;i<=r;i++){
      den_1*=i;
   }
   for(int i=1;i<=(n-r);i++){
      den_2*=i;
   }
   return num/(den_1*den_2);
}
int main() {
   // int n,n_c,temp,n_r=0;
   // cout<<"Enter the number : \n";
   // cin>>n;
   // for(int i=0;i<=n-1;i++){
   //    for(int k=0;k<=(n-i-1);k++){
   //       cout<<" ";
   //    }
   //    for(int j=0;j<=i;j++){
   //       cout<<" "<<nCr(i,j);
   //    }
   //    cout<<endl;
   // }
   int a =5,b=2;
   cout<<a<<" "<<b<<endl;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<a<<" "<<b<<endl;
}