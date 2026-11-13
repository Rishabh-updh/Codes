#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n , target;
	printf("Enter the size of the array : \n");
	scanf("%d",&n);
	int arr[n] ;
	printf("Enter the elements of the array : \n");
	for(int i = 0 ; i < n ; i++)
		scanf("%d",&arr[i]);
		printf("Enter the target element : \n");
	scanf("%d",&target);
	clock_t t ;
	t = clock();
	for(int i = 0 ; i < n ; i < i++)
		if(arr[i]==target)
			break ;
	t = clock() - t ;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("The time taken to search the element in the array is : %f \n " , time_taken);
	return 0 ;
	}
