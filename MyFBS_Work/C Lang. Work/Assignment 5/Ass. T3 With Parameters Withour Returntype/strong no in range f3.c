#include<stdio.h>
void strongno(int);
void main()
{
	int num;
	printf("Enter a no. of range for checking which one is Strong no. in given range.\n");
	scanf("%d",&num);
	strongno(num);
}
void strongno(int n){
	int temp,rem,sum=0,j,i=1,k;
	temp=n;
	while(i<=n){
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