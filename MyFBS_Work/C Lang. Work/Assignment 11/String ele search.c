#include <stdio.h>
#include<string.h>

void main() {
    char str[100], ch;
    int i, found = 0;

    // Scan the string from the user
    printf("Enter a string: ");
    scanf("%s", str);  // Read the entire line until newline

    // Clear the input buffer after the string input to prevent issues with subsequent inputs
    getchar();

    // Scan the character to search for
    printf("Enter a character to search: ");
    scanf("%c", &ch);
// Search for the character in the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character '%c' found at position %d.\n", ch, i + 1);
            found = 1;
            break; // Exit loop if character is found
        }
    }

    if (found==0) {
        printf("Character '%c' not found in the string.\n", ch);
    }
}
