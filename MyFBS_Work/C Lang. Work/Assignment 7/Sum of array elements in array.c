#include<stdio.h>
void main(){
	int arr[5],brr[5],crr[5];
	int i;
	printf("Two array element sum in another array :\n");
	printf("Enter 1st array elements :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter 2nd array elements :");
	for(i=0;i<5;i++)
	{
		scanf(" %d",&brr[i]);
    }
    for(i=0;i<5;i++){
    	crr[i]=arr[i]+brr[i];
	}
	printf("Sum of array elements is : ");
	for(i=0;i<5;i++){
		printf("%d ",crr[i]);
	}
}