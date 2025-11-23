#include <stdio.h>

int main() {
    printf("Yash Kumar, 125113026\n");
    int arr[] = {5, 7, 9, 1, 3, 4};
    int n = 6;
    int i, j;

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}