#include <stdio.h>
#include <string.h>
char* mystrchr(char*,char);

void main()
{
    char str[] = "Firstbitsolution";
    char ch = 'r';

    char* result = mystrchr(str, ch);
    if (result != NULL) {
        printf("The character '%c' is found at index %d\n",ch, result-str);
    }
    else {
        printf("The character '%c' is not found in the ""string\n",ch);
    }
}
char* mystrchr(char* str, char ch) {
	 while (*str != '\0') {
        if (*str == (char)ch) {
            return str;  // Return pointer to the first occurrence
        }
        str++;  // Move to the next character
    }

    // If not found, check for the case where the character is '\0'
    if (*str == (char)ch) {
        return str;
    }

    return NULL;  // Return NULL if the character is not found
}


