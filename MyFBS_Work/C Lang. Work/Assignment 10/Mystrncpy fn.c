#include <stdio.h>
#include <string.h>
char* mystrcpy(char*,char*,int);
void main()
{

    char source[] = "Firstbit";
    char dest[20];
    mystrcpy(dest, source,5);

    printf("Source String is: %s\n", source);
    printf("Destination string is: %s\n",dest);
}
char* mystrcpy(char* dest, char*source,int p)
{
	int i=0;
	while(source[i]!='\0' && i<p){
		dest[i]=source[i];
		i++;
	}
	dest[i]='\0';
}