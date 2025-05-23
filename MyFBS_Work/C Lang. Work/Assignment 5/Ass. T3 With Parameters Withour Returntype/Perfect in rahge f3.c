#include<stdio.h>
void perfectno(int);
void main()
{
	int num;
	printf("Enter a no.range to check the perfect no in given range\n");
	scanf("%d",&num);
	perfectno(num);{
	}
}
void perfectno(int n){
	int i=1,j,sum;
	
	while(i<=n){
		sum=0;
		for(j=1;j<i;j++){
		if(i%j==0){
			sum=sum+i;
	}
}
        if(sum==i){
		printf("%d\n",i);
		}
		i++;
	}
}
