#include <stdio.h>  
#include <string.h>
void copy_string(char *src, char *dest) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0'; 
}

int main() {
    printf("Yash Kumar, 125113026\n");
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    source[strcspn(source, "\n")] = '\0';

    copy_string(source, destination);

    printf("Copied string: %s\n", destination);

    return 0;
}

