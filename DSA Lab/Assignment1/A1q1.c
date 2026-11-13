#include<stdio.h>
#include<stdlib.h>
void InsertElement(int element , int index , int*data , int *size){
	data = realloc(data , *size+1) ;
	for(int i = *size-1 ; i >= index ; i--)
		data[i+1] = data[i];
	data[index]=element;
	*size = *size+1;
	for(int i = 0 ; i < *size ; i++)
		printf("%d ",data[i]);
	printf("\n") ;
}
void DeleteElement(int index , int*data , int *size){
	for(int i = index ; i < *size-1 ; i++)
		data[i] = data[i+1];
	*size = *size-1;
	for(int i = 0 ; i < *size ; i++)
		printf("%d ",data[i]);
	printf("\n") ;
}
int main(){
	int n ;
	printf("Enter the size of the array : \n");
	scanf("%d",&n);
	int * arr = malloc((n+1)*sizeof(int));
	printf("Enter the elements of the array : \n");
	for(int i = 0 ; i < n; i++)
		scanf("%d",&arr[i]) ;
	printf("The initial array is : \n");
	for(int i = 0 ; i < n ; i++)
		printf("%d ",arr[i]);
	printf("\n") ;
	// insertion of an element ! //
	int element , indexI ; 
	printf("Enter the index and the element you wish to insert : \n");
	scanf("%d %d", &indexI , &element);
	InsertElement(element , indexI , arr , &n) ;
	// deletion of an element ! //
	int indexD ;
	printf("Enter the index of the element you wish to delete : \n");
	scanf("%d",&indexD);
	DeleteElement(indexD , arr , &n) ;
	free(arr);
	return 0 ;
	}
