#include<stdio.h>
#include<string.h>

void main()
{
    char source[] = "Firstbit Solution";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source); 

    printf("%s", target);
}