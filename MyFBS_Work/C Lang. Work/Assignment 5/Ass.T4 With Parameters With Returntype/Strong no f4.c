#include<stdio.h>
int strongno(int);
void main(){
	int num,res;
	printf("Enter a no. for checking the no. is Strong no. or not.\n");
	scanf("%d",&num);
	res=strongno(num);{
		if(res==1){
			printf("No is Strong");
		}
		else{
			printf("No. in not Strong");
		}
	}
}
int strongno(int n )
{
	int temp,rem,sum=0,i;
	temp=n;
	while(n>0){
		rem=n%10;
		int fact=1;
		for(i=rem;i>=1;i--){
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp){
		return 1;
	}
	else{
		return 0;
	}
}