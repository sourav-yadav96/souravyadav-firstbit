#include<stdio.h>
void strongno();
void main()
{
	strongno();
}
void strongno(){
	int num,temp,rem,sum=0,j,i=1,k;
	printf("Enter a no. of range for checking which one is Strong no. in given range.\n");
	scanf("%d",&num);
	temp=num;
	while(i<=num){
		k=i;
		sum=0;
	while(k>0){
		rem=k%10;
		int fact=1;
		for(j=rem;j>=1;j--){
			fact=fact*j;
		}
		sum=sum+fact;
		k=k/10;
	}
	if(sum==i){
		printf("%d\n",i);
		
	}
	i++;
	}
}