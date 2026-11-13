#include <stdio.h>
int main() {
int N,x,n;
scanf("%d",&N);
int arr[N+1];
for(int i=1;i<=N;i++){
scanf("%d %d",&x,&n);
int sum=0;
for(int i=1;i<=n;i++){
    x=x*(-1);
    sum=sum+x;
}
    arr[i]=-sum;
}
for(int j=1;j<=N;j++){
    printf("%d\n",arr[j]);
}
 return 0;
}