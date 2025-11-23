#include <stdio.h>
#define MAX_SIZE 100
double calculate_average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}
int main() {
    printf("Yash Kumar, 125113026\n");
    int n;
    int arr[MAX_SIZE];

    printf("Enter the number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double average = calculate_average(arr, n);
    printf("Average = %.2f\n", average);

    return 0;
}