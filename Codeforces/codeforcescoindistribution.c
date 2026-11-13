#include <stdio.h>
int main() { //plz run
    int arr[3],n,t,max=0;
    scanf("%d",&t);
    int ans[t];
    for(int q=0;q<t;q++){
        int counter=0;
        for(int j=0;j<3;j++){
            scanf("%d",&arr[j]);
        }
        scanf("%d",&n);
        for(int i=0;i<3;i++){
            if(arr[i]>=max)
            max=arr[i];
        }
        if(((max-arr[0])+(max-arr[1])+(max-arr[2]))>n){
        ans[q]=0;
        continue;
        }
        for(int k=0;k<3;k++){
            if(arr[k]==max)
                continue;
            while(arr[k]<max){
                arr[k]++;
                counter++;
            }
        }
    n=n-counter;
        if(n%3==0){
            ans[q]=1;
        }
        else if(n<0){
            ans[q]=0;
        }
        else{
            ans[q]=0;
        }
    }
    for(int p=0;p<t;p++){
        if(ans[p]==1){
            printf("YES\n");
        }
        else if(ans[p]==0){
            printf("NO\n");
        }       
    }
    return 0;
}