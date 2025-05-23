#include <stdio.h>
#include<string.h>
char* mystrcat(char*,char*);
void main()
{
    char dest[50] = "My Name is";
    char src[50] = " Sourav Yadav";
    printf("Before concatenat : %s\n", dest);
    strcat(dest, src);

    printf("After Concatenat: %s", dest);
}
char* mystrcat(char* str1, char* str2){
	int len=0,i=0;
	while(str1[i]!='\0'){
		len++;
		i++;
}
    int j=0;
	while(str2[i]!='\0'){
		str1[len]=str2[i];
		i++;
		len++;
	}
}