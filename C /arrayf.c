#include <stdio.h>
int main() {
    int marks[2][3];
    for(int i=0;i<3;i++){
        printf("Enter the marks of the first student : \n");
        scanf("%d",&marks[0][i]);
    }
    for(int j=0;j<3;j++){
        printf("Enter the marks of the second student : \n");
        scanf("%d",&marks[1][j]);
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
        printf("%d   ",marks[i][j]);   
        }
        printf("\n");
    }
    return 0;
}