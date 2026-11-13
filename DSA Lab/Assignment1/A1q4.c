#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n , sum = 0 ;
	printf("Enter the size of the array : \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array : \n");
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("The sum of all the elements in the array is : %d \n", sum) ;
	return 0 ;
	}
