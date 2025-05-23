#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "Firstbitsolution";
    char ch = 't';

    char* result = strchr(str, ch);
    if (result != NULL) {
        printf("The character '%c' is found at index %d\n",
               ch, result-str);
    }
    else {
        printf("The character '%c' is not found in the ""string\n",ch);
    }
}

