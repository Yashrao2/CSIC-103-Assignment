#include <stdio.h>
#include <string.h>
int string_length(const char *str) {
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}
int main() {
    printf("Yash Kumar, 125113026\n");
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }
    str[strcspn(str, "\n")] = '\0';

    int length = string_length(str);
    printf("Length of the string: %d\n", length);

    return 0;
}
