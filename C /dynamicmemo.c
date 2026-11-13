#include <stdio.h>
#include <stdlib.h>

int main() {
    // malloc
    int *ptr = (int*) malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        ptr[i]= i+1; 
        printf("%d  ",ptr[i]);
    }
    free(ptr);
    printf("\n");
    // calloc
    int *mptr = (int*) calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        printf("%d  ",mptr[i]);
    }
    return 0;
}