#include <stdio.h>
int main() {
    printf("Yash Kumar, 125113026\n");
    int arr[] = {5, 7, 9, 1, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int largest = *ptr;
    int smallest = *ptr;

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
    
    return 0;
}