#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Yash Kumar, 125113026\n");
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Content of %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}