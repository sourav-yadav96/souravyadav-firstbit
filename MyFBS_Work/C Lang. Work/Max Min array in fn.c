#include<stdio.h>
void store(int*,int);
void display(int*,int);
void maximum(int*,int);
void minimum(int*,int);
void main(){
	int arr[5];
	printf("Find maximum and minimum element in an array :\n");
	store(arr,5);
	display(arr,5);
	maximum(arr,5);
	minimum(arr,5);
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
 void maximum(int* arr, int n){
    int max;
    max=(arr[0]);
    for(int i=1;i<n;i++)
	{
    	if(arr[i]>max)
		{
    		max=arr[i];
		}
	}
	printf("\n Maximum no is: %d",max);
		
	}
void minimum(int* arr, int n){	
	int	min=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\n Minimum no is: %d",min);
}
	  



