#include <stdio.h>
#include <stdlib.h>
int main() {
    int N , newN , i , max ;
    int *arr , *temp ;
    printf("Enter N: ") ; // Read initial size
    scanf("%d", &N) ;
    arr = (int *)malloc(N * sizeof(int)) ; // Allocate memory using malloc()
    if(arr == NULL){
        printf("Memory allocation failed!\n") ;
        return 1 ;
    }
    printf("Enter %d elements:\n", N) ;  // Read elements
    for(i = 0 ; i < N ; i++){
        scanf("%d", arr + i) ;
    }
    printf("Original array: ") ; // Print elements
    for(i = 0 ; i < N ; i++){
        printf("%d ", *(arr + i)) ;
    }
    max = *arr ; // find maximum using pointer arithmetic
    for(i = 1 ; i < N ; i++){
        if(*(arr + i) > max){
            max = *(arr + i) ;
        }
    }
    printf("\nMaximum element = %d\n", max) ;
    printf("Enter new size: ") ; // increase capacity
    scanf("%d", &newN) ;
    temp = (int *)realloc(arr, newN * sizeof(int)) ;
    if(temp == NULL){
        printf("Memory reallocation failed!\n") ;
        free(arr) ;
        return 1 ;
    }
    arr = temp ;
    // Read additional elements
    if(newN > N){
        printf("Enter %d additional elements:\n", newN - N) ;
        for(i = N ; i < newN ; i++)
            scanf("%d", arr + i) ;
    }
    // Print whole array after resizing
    printf("Array after resizing: ") ;
    for(i = 0 ; i < newN ; i++)
        printf("%d ", *(arr + i)) ;
    free(arr) ; // free memory
    arr = NULL ;
    return 0 ;
}