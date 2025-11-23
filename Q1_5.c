
#include<stdio.h>

int main() {
    printf("Yash Kumar,125113026\n");
    int num, i = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}
