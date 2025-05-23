#include<stdio.h>
void main(){
	int arr[5];
	int i,count=0;;
	printf("Printing Prime elements in an array :\n");
	printf("Enter array elements :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Prime Elements are:");
    for(i=0;i<5;i++){
       for(int j=2;j<arr[i];j++){
	       if(arr[i]%j==0){
		   count=1;
		}
	}
if(count==0)
  {
	printf("%d ",arr[i]);
  }
}
}