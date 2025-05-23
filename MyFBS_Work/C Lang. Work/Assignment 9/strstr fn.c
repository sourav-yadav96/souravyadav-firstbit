#include <stdio.h>
#include <string.h>
void main()
{
    char s1[] = "Firstbitsolution";
    char s2[] = "bit";
    char* result;
    result = strstr(s1, s2);
    if (result != NULL) {
        printf("Substring found: %s\n", result);
    }
    else {
        printf("Substring not found.\n");
    }
}
