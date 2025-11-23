#include <stdio.h>

int main() {
    printf("Yash Kumar,125113026\n");
    int num, rev = 0;
    printf("Enter the number: ");
    if (scanf("%d", &num) != 1) return 0;

    int n = (num < 0) ? -num : num;

    do {
        rev = rev * 10 + (n % 10);
        n /= 10;
    } while (n > 0);

    if (num < 0) rev = -rev;

    printf("Reversed number = %d\n", rev);
    return 0;
}