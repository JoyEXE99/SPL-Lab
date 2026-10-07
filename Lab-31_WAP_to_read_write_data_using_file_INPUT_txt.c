#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char text[100];

    // Open file in write mode
    file = fopen("INPUT.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        exit(1);
    }

    printf("Enter data to write into INPUT.txt: ");
    fgets(text, sizeof(text), stdin);

    // Write input data to INPUT.txt
    fputs(text, file);
    fclose(file);

    printf("\nData written to INPUT.txt successfully.\n");

    // Reopen file in read mode
    file = fopen("INPUT.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("\nReading content from INPUT.txt:\n");
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    fclose(file);

    return 0;
}