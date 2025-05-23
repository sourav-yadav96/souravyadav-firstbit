#include<stdio.h>
int perfectno(int);
void main()
{
	int num,res;
	printf("Enter a no. to check the no. is perfect or not.\n");
	scanf("%d",&num);
	res=perfectno(num);{
	if(res==1){
		printf("No is perfect");
	}
	else{
		printf("No is not perfect");
	}
}
}
int perfectno(int n){
	int i=1,sum=0;
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
}
if(sum==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}