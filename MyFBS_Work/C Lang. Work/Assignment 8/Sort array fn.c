#include<stdio.h>
void store(int*,int);
void sortarray(int*,int);
void main(){
	int arr[5];
	printf("Sort an array :\n");
	store(arr,5);
	sortarray(arr,5);
}
void store(int* arr, int n){
	printf("Enter array elements :\n");
		for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void sortarray(int* arr, int n){
	int temp;
	for(int i=0;i<5;i++){
		for(int j=(i+1);j<5;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Sort array is : ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
}