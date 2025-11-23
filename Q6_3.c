#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Yash Kumar, 125113026\n");
    FILE *file;
    char filename[100];
    int char_count = 0, word_count = 0, line_count = 0;
    char ch;
    int in_word = 0;

    printf("Enter the filename to analyze: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
    }

    fclose(file);

    printf("Character count: %d\n", char_count);
    printf("Word count: %d\n", word_count);
    printf("Line count: %d\n", line_count);

    return 0;
}