#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
typedef struct student{
	int std_ID ;
	char First_Name[50] ;
	char Last_Name[50] ;
	float CGPA ;
}stud;
void CGPA8(stud arr[] , int n){
	for(int i = 0 ; i < n ; i++){
		if(arr[i].CGPA >= 8){
			printf("%d , %s , %s , %f \n",arr[i].std_ID,arr[i].First_Name,arr[i].Last_Name,arr[i].CGPA);
		}
	}
}
void Sharma(stud arr[] , int n){
	for(int i = 0 ; i < n ; i++){
		if(strcmp(arr[i].Last_Name,"Sharma")==0){
			printf("%d , %s , %s , %f \n",arr[i].std_ID,arr[i].First_Name,arr[i].Last_Name,arr[i].CGPA);
		}
	}
}
void ID(stud arr[] , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(arr[j].std_ID==arr[i].std_ID){
				printf("%d , %s , %s , %f \n",arr[i].std_ID,arr[i].First_Name,arr[i].Last_Name,arr[i].CGPA);
			}
		}
	}
}
int main(){
	int n ;
	printf("Enter the size of the class : \n");
	scanf("%d",&n);
	getchar();
	stud arr[n];
	for(int i = 0 ; i < n ; i++){
		printf("Enter the data of student no. %d : \n",i+1);
		printf("Enter the Student ID : \n");
		scanf("%d",&arr[i].std_ID);
		getchar();
		printf("Enter the First name : \n");
		fgets(arr[i].First_Name , 50 , stdin);
		printf("Enter the Last name : \n");
		fgets(arr[i].Last_Name , 50 , stdin);
		printf("Enter the CGPA : \n");
		scanf("%f",&arr[i].CGPA);
		getchar();
	}
	CGPA8(arr ,  n);
	Sharma(arr , n);
	ID(arr, n);
	return 0 ;
	}
