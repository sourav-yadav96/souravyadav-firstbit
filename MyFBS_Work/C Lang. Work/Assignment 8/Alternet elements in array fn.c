#include<stdio.h>
void store(int*,int);
void alternetarrayelement(int*,int);
void main(){
	int arr[5];
	printf("Print alternet array element:\n");
	store(arr,5);
	alternetarrayelement(arr,5);
}
void store(int* arr, int n){
    printf("Enter array elements :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void alternetarrayelement(int* arr, int n){
	printf("Alternet Array Elements are:");
	for(int i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
		i=i+1;
	}
}