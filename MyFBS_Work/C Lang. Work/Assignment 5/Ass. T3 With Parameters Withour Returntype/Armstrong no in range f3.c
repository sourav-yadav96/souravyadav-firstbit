#include<stdio.h>
void armstrongno(int);
void main()
{
	int num;
	printf("Enter a range in which you want to print the Armstronge no. in that range\n");
	scanf("%d",&num);
	armstrongno(num);
}
void armstrongno(int n){
	int rem,i,j,copy;
	int temp=n;
	for(i=1;i<=temp;i++){
	int	q=i;
	int	count=0;
	while(q>0){
		count++;
		q=q/10;
	}
	int arm=0;
	for(j=i;j>0;j=j/10){
		rem=j%10;
		int sum=1;
		copy=count;
		while(copy>0){
			sum=sum*rem;
			copy--;
		}
		arm=arm+sum;
	}
	if(arm==i){
		printf("%d\n",i);
	}

}
}