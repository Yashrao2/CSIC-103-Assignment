// Demonstrate call by value and call by reference
#include <stdio.h>
void call_by_value(int a) {
    a = a + 10;
}
void call_by_reference(int *b) {
    *b = *b + 10;
}
int main() {
    printf("Yash Kumar, 125113026\n");
    int num1, num2;
    printf("Enter first number (for call by value): ");
    scanf("%d", &num1);
    printf("Enter second number (for call by reference): ");
    scanf("%d", &num2);
    printf("Before function calls: num1 = %d, num2 = %d\n", num1, num2);
    call_by_value(num1);
    call_by_reference(&num2);
    printf("After function calls: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
