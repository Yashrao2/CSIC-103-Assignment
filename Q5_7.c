#include <stdio.h>
#define MAX_SIZE 10
void read_matrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void add_matrices(int a[MAX_SIZE][MAX_SIZE], int b[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
void print_matrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    printf("Yash Kumar, 125113026\n");
    int rows, cols;
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    printf("Enter number of rows (max %d): ", MAX_SIZE);
    scanf("%d", &rows);
    printf("Enter number of columns (max %d): ", MAX_SIZE);
    scanf("%d", &cols); 
    printf("Enter elements of first matrix:\n");
    read_matrix(matrix1, rows, cols);
    printf("Enter elements of second matrix:\n");
    read_matrix(matrix2, rows, cols);
    add_matrices(matrix1, matrix2, result, rows, cols);
    printf("Resultant matrix after addition:\n");
    print_matrix(result, rows, cols);
    return 0;
}   
