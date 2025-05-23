#include <stdio.h>
#include <string.h>

void main()
{

    char source[] = "Firstbit Solution";
    char dest[20];
    strcpy(dest, source);

    printf("Source String is: %s\n", source);
    printf("Destination string is: %s\n", dest);
}