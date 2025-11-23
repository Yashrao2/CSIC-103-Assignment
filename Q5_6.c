#include <stdio.h>
#include <string.h>
#include <ctype.h>
static int is_palindrome(const char *str)
{
    size_t left = 0;
    size_t right = strlen(str);
    if (right == 0) return 1; 
    right--; 

    while (left < right) {
        while (left < right && !isalnum((unsigned char)str[left])) left++;
        while (left < right && !isalnum((unsigned char)str[right])) right--;
        if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right])) {
            return 0; 
        }
        left++;
        right--;
    }
    return 1; 
}
int main() {
    printf("Yash Kumar, 125113026\n");

    char str[1000]; 
    printf("Enter a string: ");

    if (fgets(str, sizeof str, stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    str[strcspn(str, "\n")] = '\0'; 

    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");
    } 
    else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}   