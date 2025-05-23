#include<stdio.h>
void perfectno();
void main()
{
	perfectno();
}
void perfectno(){
	int num,i=1,j,sum;
	printf("Enter a no.range to check the perfect no in given range\n");
	scanf("%d",&num);
	while(i<=num){
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
