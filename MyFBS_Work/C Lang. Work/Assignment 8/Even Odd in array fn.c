#include<stdio.h>
void store(int*,int);
void display(int*,int);
void even(int*,int);
void odd(int*,int);
void main(){
	int arr[5];
	printf("Find Even and Odd element in an array :\n");
	store(arr,5);
	display(arr,5);
	even(arr,5);
	odd(arr,5);
}
void store(int* arr, int n){
		for(int i=0;i<n;i++)
	{
		printf("Enter array elements :\n");
		scanf("%d",&arr[i]);
	}
}
void display(int* arr, int n){
	printf("Array Elements are:");
	for(int i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
    }
 }
void even(int *arr, int n){
	printf("\nEven elements in array are:");
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			printf(" %d ",arr[i]);
		}
	}
}
void odd(int *arr, int n){
	printf("\nOdd elements in array are:");
	for(int i=0;i<n;i++){
	if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}
}
}