#include<stdio.h>
void main(){
	int arr[5],brr[5];
	int i;
	printf("Reverse array :\n");
	printf("Enter array elements :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		for(int j=4;j>=0;j--){
			brr[i]=arr[j];
		scanf(" %d",&brr[i]);
		}
	}
	printf("Reverse array is:");
	for(i=0;i<5;i++){
		printf("%d",brr[i]);
	}
}