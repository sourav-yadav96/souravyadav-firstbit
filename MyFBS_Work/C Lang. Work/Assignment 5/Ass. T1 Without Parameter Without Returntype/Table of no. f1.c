#include<stdio.h>
void tableofnumber();
void main()
{
	tableofnumber();
}
void tableofnumber(){
	int num,i=1,sum=0;
	printf("Enter a no. for printing table of that no.\n");
	scanf("%d",&num);
	while(i<=10){
		sum=num*i;
		printf("%d\n",sum);
		i++;
	}
}