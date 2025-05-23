#include<stdio.h>
void main(){
	int arr[5];
	int i,sum=0;
	printf("Sum of all element in an array :\n");
	printf("Enter 5 array elements :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array Elements are:");
	for(i=0;i<5;i++)
	{
		printf(" %d",arr[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+arr[i];
	}
	printf("\nSum of all array elements is %d",sum);
}