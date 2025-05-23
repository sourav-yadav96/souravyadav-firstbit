#include<stdio.h>
void main(){
	int arr[5];
	int i,sum=0;
	printf("Find Even and Odd elements in an array :\n");
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
	printf("\n Even elements in array are:");
	for(i=0;i<5;i++){
		if(arr[i]%2==0){
			printf(" %d ",arr[i]);
		}
	}
	printf("\n Odd elements in array are:");
	for(i=0;i<5;i++){
	if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}
}
}