#include<stdio.h>
void tableofnumber(int);
void main()
{
	int num;
	printf("Enter a no. for printing table of that no.\n");
	scanf("%d",&num);
	tableofnumber(num);
}
void tableofnumber(int n){
	int i=1,sum=0;
	while(i<=10){
		sum=n*i;
		printf("%d\n",sum);
		i++;
	}
}