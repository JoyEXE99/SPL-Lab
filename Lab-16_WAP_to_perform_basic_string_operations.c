#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];

    // Input two strings
    printf("Enter first string: ");
    gets(str1); // Alternatively: fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    gets(str2);

    // 1. String Length
    printf("\n--- String Operations ---\n");
    printf("Length of 1st string = %zu\n", strlen(str1));
    printf("Length of 2nd string = %zu\n", strlen(str2));

    // 2. String Copy
    strcpy(temp, str1);
    printf("Copied String (temp) = %s\n", temp);

    // 3. String Compare
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("Both strings are equal.\n");
    } else if (cmp > 0) {
        printf("First string is lexicographically greater than second.\n");
    } else {
        printf("First string is lexicographically smaller than second.\n");
    }

    // 4. String Concatenation
    strcat(str1, str2);
    printf("Concatenated String = %s\n", str1);

    return 0;
}