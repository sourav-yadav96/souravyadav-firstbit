#include<stdio.h>
int evenoddchecker();
void main()
{
	int res;
	res=evenoddchecker();{
	if (res==1){
		printf("The given no is even");
	} else{
		printf("The given no is odd");
	}
	}
}
    int evenoddchecker()
    {
	int num;
	printf ("Enter the number to find out that no.is even or odd\n");
	scanf("%d",&num);
	if(num%2==0){
		return 1;
		}
	else{
		return 0;
	}
}