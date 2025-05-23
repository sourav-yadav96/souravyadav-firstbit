#include<stdio.h>
void main(){
	int arr[5];
	int i;
	printf("Find maximum and minimum element in an array :\n");
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
    int max,min;
    max=arr[0];
    min=arr[0];
    for(i=1;i<5;i++)
	{
    	if(arr[i]>max)
		{
    		max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\n Maximum no is: %d",max);
	printf("\n Minimum no is: %d",min);
	  
}



