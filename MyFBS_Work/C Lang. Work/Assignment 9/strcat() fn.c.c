#include <stdio.h>
#include<string.h>
void main()
{
    char dest[50] = "My Name is";
    char src[50] = " Sourav";
    printf("Before concatenat : %s\n", dest);
    strcat(dest, src);

    printf("After Concatenat: %s", dest);
}