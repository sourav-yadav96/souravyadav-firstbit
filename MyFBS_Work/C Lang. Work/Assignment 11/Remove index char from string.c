/*#include <stdio.h>
#include<string.h>

void main() {
    char str[100];
    char str1[100];
    int a;
    int i,j=0;

    // Scan the string from the user
    printf("Enter a string: ");
    scanf("%s", str);  // Read the entire line until newline
    printf("Enter a index to remove the caharcter of that index from string : ");
    scanf("%d", &a);
for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != str[a]) {
        	str1[j]=str[i];
        	j++;
        }
    }
    str1[j]='\0';
    printf("%s",str1);

}*/

#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int n, i;

    // Read a string from the user
    printf("Enter a string: ");
    scanf("%s",str);

    // Read the index of the character to be removed
    printf("Enter the index (0-based) to remove: ");
    scanf("%d", &n);

    // Get the length of the string
    int len = strlen(str);

    // Check if the index is valid
    if (n < 0 || n >= len) {
        printf("Invalid index!\n");
        return 1;
    }

    // Shift the characters to the left to remove the character at index 'n'
    for (i = n; i < len; i++) {
        str[i] = str[i + 1];  // Shift each character left by one
    }

    // Print the modified string
    printf("String after removal: %s\n", str);
}