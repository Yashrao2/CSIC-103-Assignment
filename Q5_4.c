#include <stdio.h>
int reverse_integer(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    printf("Yash Kumar, 125113026\n");

    int number;
    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int reversed_number = reverse_integer(number);
    printf("Reversed integer: %d\n", reversed_number);

    return 0;
}
