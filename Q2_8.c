#include <stdio.h>  
int main() {
    printf("Yash Kumar, 125113026\n");
    int n, i, j;
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    printf("Sum of main diagonal elements: %d\n", mainDiagonalSum);
    printf("Sum of secondary diagonal elements: %d\n", secondaryDiagonalSum);

    return 0;
} 