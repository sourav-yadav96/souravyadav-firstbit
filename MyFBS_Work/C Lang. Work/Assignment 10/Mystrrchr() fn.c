#include <stdio.h>
#include <string.h>
char* my_strrchr(char*,char);
 
void main()
{
    // initializing string
    char str[] = "Firstbitsolution";
 
    // character to be searched
    char chr = 't';
 
    // Storing pointer returned by
    char* ptr = my_strrchr(str, chr);
 
    // getting the position of the character
    if (ptr!= NULL) {
        printf("Last occurrence of %c in %s is at index %d",
               chr, str, ptr - str);
    }
    // condition for character not present
    else {
        printf("%c is not present in %s ", chr, str);
}
}
char* my_strrchr( char* str, char chr) {
   char *last_occurrence = NULL;  // Initialize a pointer to NULL

    // Loop through each character in the string
    while (*str != '\0') {
        if (*str == (char)chr) {
            last_occurrence = (char *)str;  // Update pointer to last occurrence
        }
        str++;  // Move to the next character
    }

    // Check if the character is the null terminator and should be considered
    if (*str == (char)chr) {
        last_occurrence = (char *)str;
    }

     return last_occurrence;  // Return pointer to the last occurrence or NULL
}