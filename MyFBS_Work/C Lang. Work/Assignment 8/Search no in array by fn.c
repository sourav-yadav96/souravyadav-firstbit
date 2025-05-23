#include<stdio.h>
void store(int*,int);
void display(int*,int);
void search(int*,int);
void main(){
	int arr[5];
	printf("Search element in an array :\n");
	store(arr,5);
	display(arr,5);
	search(arr,5); 
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
void search(int* arr, int n){
	int flage=0,num;
	printf("\nEnter a no which you want to search in given array\n");
	scanf("%d",&num);
    for(int i=0;i<n;i++)
	{
    	if(arr[i]==num)
		{
		  printf("\n No is found in given array at index %d",i);
		  flage=1;
		}
	}
	if(flage==0)
   {
   	 printf("\n No is not present in given array" );
   }
	}