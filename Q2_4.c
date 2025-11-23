#include <stdio.h>
int main() {
    printf("Yash Kumar, 125113026\n");
    int arr[] = {5, 7, 9, 1, 3, 4, 5, 3, 7, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[100] = {0}; 
    int i;

    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    printf("Element frequencies:\n");
    for (i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            printf("Element %d: %d times\n", i, freq[i]);
        }
    }

    return 0;
}

