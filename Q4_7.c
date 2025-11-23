#include <stdio.h>
int main() {
    printf("Yash Kumar, 125113026\n");

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr; 

    printf("Array elements using pointer arithmetic:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

    return 0;
}
