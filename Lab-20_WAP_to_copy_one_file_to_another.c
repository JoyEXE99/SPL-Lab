#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourcePath[100], targetPath[100];
    char ch;

    // Input source and destination file paths
    printf("Enter source file path/name: ");
    scanf("%s", sourcePath);

    printf("Enter destination file path/name: ");
    scanf("%s", targetPath);

    // Open source file in read mode
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file '%s'.\n", sourcePath);
        exit(EXIT_FAILURE);
    }

    // Open destination file in write mode
    targetFile = fopen(targetPath, "w");
    if (targetFile == NULL) {
        fclose(sourceFile);
        printf("Error: Cannot create destination file '%s'.\n", targetPath);
        exit(EXIT_FAILURE);
    }

    // Copy character by character from source to target
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourcePath, targetPath);

    // Close both files
    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}