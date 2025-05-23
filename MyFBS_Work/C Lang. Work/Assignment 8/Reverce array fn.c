#include<stdio.h>
void store(int*,int);
void revercearray(int*,int);
void main(){
	int arr[5];
	printf("Reverce array element :\n");
	store(arr,5);
	revercearray(arr,5);
}
void store(int* arr, int n)
{
	printf("Enter array elements :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void revercearray(int* arr,int n)
{
	int brr[n];
	int j=0;
	for(int i=n-1;i>=0;i--){
		brr[j]=arr[i];
		j++;
		}
	printf("Reverse array is:");
	for(int i=0;i<5;i++){
		printf("%d",brr[i]);
	}
}
