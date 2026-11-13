#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
void displayHeap(int* arr , int size){
    for(int i = 1 ; i < size ; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int* insert(int* arr , int *size , int val){ 
    int* temp = realloc(arr , sizeof(int)*(*size+1)) ;  // 6 -> 7 memory allocation 
    if(temp!=NULL) arr = temp ;
    (*size)++ ; // n -> n+1 == 6->7 => 0,1,2,3,4,5,6 {ye indexes use karenge }
    arr[(*size)-1] = val ; // index to be filled is 6 not 7 
    int j = (*size)-1 ; // and fir ham start bhi 6 se he karenge !!
    while(j>1){
        if(arr[j/2]<arr[j]){
            swap(&arr[j/2],&arr[j]) ;
            j/=2;
        }
        else break ;
    }
    return arr ;
}
int* delete(int* arr , int* size ){
    swap(&arr[1],&arr[*size-1]);
    int* temp = realloc( arr , sizeof(int)*(*size-1)) ;
    if(temp!=NULL) arr = temp ;
    // heapify down
    (*size)--;
    //displayHeap(arr,*size);
    int i = 1 ;
    while(2*i<=(*size)){
        int lc = 2*i , rc = (2*i)+1 , max = i ;
        if(lc<*size && arr[lc]>arr[max]) max = lc ;
        if(rc<*size && arr[rc]>arr[max]) max = rc ;
        if(max!=i){
            swap(&arr[i],&arr[max]);
            i = max ;
        }
        else break ;
    }
    return arr ;
}
int main() {
    int n , temp;
    printf("Enter the number of elements you want in the HEAP !! \n");
    scanf("%d",&n); // n = 5 
    n++;            // n = 6 
    int* arr = (int*)malloc(sizeof(int)*n); // malloc hua 6 ka (0-5) 
    printf("Enter the elements of the heap : \n");
    for(int i = 1 ; i < n  ; i++){ // 1,2,3,4,5 because n = 6 
        scanf("%d",&arr[i]);
        int j = i ;
        while(j>1){
            if(arr[j/2]<arr[j]){
                swap(&arr[j/2],&arr[j]) ;
                j/=2;
            }
            else break ;
        }
    }
    displayHeap(arr , n); // n = 6 -> display me 1-5 he jaiga !!
    char choice = '\0';
    while(1){
    printf("Do you wish to insert an element into the heap ? (y/n)\n");
    scanf(" %c",&choice);
        if(choice=='n') break ;
    printf("Enter the element that you wish to insert : \n");
    scanf("%d",&temp);
    arr = insert(arr,&n,temp); // n = 6 
    displayHeap(arr , n);
    }
    arr = delete(arr, &n);
    displayHeap(arr , n);
    return 0;
}