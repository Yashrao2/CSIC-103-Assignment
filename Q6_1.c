#include <stdio.h>
int main() {
    printf("Yash Kumar, 125113026\n");
    FILE *file;
    char filename[100];
    char content[500];

    printf("Enter the filename to create: ");
    scanf("%s", filename);
    getchar(); 

    printf("Enter content to write to the file (max 500 characters):\n");
    fgets(content, sizeof(content), stdin);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "%s", content);
    fclose(file);

    printf("Content written to %s successfully.\n", filename);
    return 0;
}