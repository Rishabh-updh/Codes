#include <stdio.h>
int main() {
    int table[2][10];
    int Num_1,Num_2;
    scanf("%d   %d",&Num_1,&Num_2);
    for(int i=0;i<2;i++){
        for(int j=1;j<=10;j++){
            if(i==0){
            table[i][j]=Num_1*j;
            printf("%d\t",table[i][j]);
            }
             if(i==1){
            table[i][j]=Num_2*j;
            printf("%d\t",table[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}