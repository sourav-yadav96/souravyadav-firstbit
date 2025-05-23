#include<stdio.h>
void main(){
	int arr[10];
	int i;
	printf("Alternet elements in an array :\n");
	printf("Enter array elements :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Alternet Array Elements are:");
	for(i=0;i<10;i++)
	{
		printf(" %d",arr[i]);
		i=i+1;
	}
}