#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int * x , int * y){
	int temp = *x ; 
	*x=*y;
	*y = temp ;
}
void sort(int arr[] , int size){
	for(int i = 0 ; i < size-1 ; i++){
		for(int j = 0 ; j < size-i-1 ; j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j] , &arr[j+1]);
		}
	}
}
int main(){
	int n , target ;
	printf("Enter the size of the array : \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array : \n");
	for(int i = 0 ; i < n ; i++)
		scanf("%d",&arr[i]);
	//for(int i = 0 ; i < n ; i++)
	//	printf("%d",arr[i]);
	printf("Enter the target element : \n");
	scanf("%d",&target);
	sort(arr,n);
	int str = 0 , end = n , mid;
	clock_t t ;
	t = clock();
	while(str<=end){
	mid = (str+end)/2;
		if(arr[mid]>target)
			end = mid-1;
		else if(arr[mid]<target)
			str = mid+1;
		else if(arr[mid]==target)
			break ; 
	}
	t = clock() - t ;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("The time taken to search the element in the array is : %f \n " , time_taken);
	return 0 ;
	}
