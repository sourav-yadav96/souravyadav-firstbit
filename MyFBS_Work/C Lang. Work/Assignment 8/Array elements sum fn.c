#include<stdio.h>
void store(int*,int);
void display(int*,int);
void arraysum(int*, int);
void main(){
	int arr[5];
	printf("All array elements sum :\n");
	store(arr,5);
	display(arr,5);
	arraysum(arr,5);
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
 void arraysum(int* arr, int n){
    int sum=0;
 	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("\nSum of all array elements is %d",sum);
 }