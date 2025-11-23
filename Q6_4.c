#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Yash Kumar, 125113026\n");
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;

    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);

    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("Content copied from %s to %s successfully.\n", sourceFilename, destFilename);
    return 0;
}