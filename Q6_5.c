#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Yash Kumar, 125113026\n");
    FILE *file;
    char filename[100];
    char content[500];

    printf("Enter the filename to append data: ");
    scanf("%s", filename);
    getchar(); 

    printf("Enter content to append to the file (max 500 characters):\n");
    fgets(content, sizeof(content), stdin);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "%s", content);
    fclose(file);

    printf("Content appended to %s successfully.\n", filename);
    return 0;
}