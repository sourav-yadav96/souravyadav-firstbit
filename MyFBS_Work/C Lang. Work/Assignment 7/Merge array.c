#include<stdio.h>
void main(){
	int arr[5],brr[5],crr[10];
	int i;
	printf("Merge array :\n");
	printf("Enter 1 array elements :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter 2 array elements :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	for(i=0;i<5;i++){
		crr[i]=arr[i];
	}
	int j=0;
	for(i=5;i<10;i++){
		crr[i]=brr[j];
		j++;
	}
	printf("Merge array is:");
	for(i=0;i<10;i++){
		printf("%d ",crr[i]);
	}
}