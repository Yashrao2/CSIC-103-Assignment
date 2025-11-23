#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Yash Kumar, 125113026\n");
    FILE *file1, *file2, *mergedFile;
    char filename1[100], filename2[100], mergedFilename[100];
    char ch;

    printf("Enter the first filename: ");
    scanf("%s", filename1);

    printf("Enter the second filename: ");
    scanf("%s", filename2);

    printf("Enter the merged filename: ");
    scanf("%s", mergedFilename);

    file1 = fopen(filename1, "r");
    if (file1 == NULL) {
        printf("Error opening first file!\n");
        return 1;
    }

    file2 = fopen(filename2, "r");
    if (file2 == NULL) {
        printf("Error opening second file!\n");
        fclose(file1);
        return 1;
    }

    mergedFile = fopen(mergedFilename, "w");
    if (mergedFile == NULL) {
        printf("Error opening merged file!\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile);
    }

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile);
    }

    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    printf("Files %s and %s merged into %s successfully.\n", filename1, filename2, mergedFilename);
    return 0;
}