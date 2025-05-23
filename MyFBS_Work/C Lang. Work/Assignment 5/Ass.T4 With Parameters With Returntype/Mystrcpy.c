#include <stdio.h>
#include <string.h>
char* mystrcpy(char*,char*);
void main()
{
    char source[20] = "Firstbit Solution";
    char dest[20];
    mystrcpy(dest, source);

    printf("Source String is: %s\n", source);
    printf("Destination string is: %s\n",dest);
}
char* mystrcpy(char* dest, char*source)
{
	int i=0;
	while(source[i]!='\0'){
		dest[i]=source[i];
		i++;
	}
	dest[i]='\0';
}