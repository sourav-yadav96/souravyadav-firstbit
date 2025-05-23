#include <stdio.h>
#include <string.h>

void main()
{
    char src[] = "Firstbitsolution";
    char dest[20];
    printf("Source string: %s\n", src);
    strncpy(dest, src, 5);
    dest[5] = '\0';
    printf("Destination string: %s\n", dest);
}