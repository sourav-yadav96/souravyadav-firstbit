#include<stdio.h>
void main(){
	int num,i=1,sum=0;
	printf("Enter a no. for printing table of that no.\n");
	scanf("%d",&num);
	while(i<=10){
		sum=num*i;
		printf("%d\n",sum);
		i++;
	}
}