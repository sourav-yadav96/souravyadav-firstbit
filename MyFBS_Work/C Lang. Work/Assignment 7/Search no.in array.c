#include<stdio.h>
void main(){
	int arr[5];
	int i,num;
	printf("Search element in an array :\n");
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
	printf("\nEnter a no which you want to search in given array\n");
	scanf("%d",&num);
	int flage=0;
    for(i=0;i<5;i++)
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



