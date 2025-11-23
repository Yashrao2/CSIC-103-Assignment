#include <stdio.h>

int main() {
    printf("Yash Kumar,125113026\n");
    long long n;
    printf("Enter an integer: ") ;
    scanf("%lld", &n);

    if (n < 0) {
        printf("Negative numbers are not considered palindromes.\n");
        return 0;
    }

    long long original = n;
    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if (rev == original)
        printf("%lld is a palindrome\n", original);
    else
        printf("%lld is not a palindrome\n", original);

    return 0;
}