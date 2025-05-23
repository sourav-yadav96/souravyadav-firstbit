#include <stdio.h>
#include <string.h>
int mystrlen(char*);
void main()
{
    char str[30] = "FirstbitSolution";
    int length = mystrlen(str);
    printf("The given String is: %s\n", str);
    printf("The Length of string is: %d\n", length);
}
int mystrlen(char* str)
{
	int len=0,i=0;
	while(str[i]!='\0'){
		len++;
		i++;
}
return len;
}
