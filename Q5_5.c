#include <stdio.h>
int sum_of_digits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    printf("Yash Kumar, 125113026\n");

    int number;
    printf("Enter a number: ");

    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int result = sum_of_digits(number);
    printf("Sum of digits: %d\n", result);
    
    return 0;
}