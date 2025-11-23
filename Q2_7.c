#include <stdio.h>
int main() {
    printf("Yash Kumar, 125113026\n");

    int r, c, i, j;                             
    int a[10][10], transpose[10][10];

    printf("Enter the number of rows: ");
    scanf("%d", &r);    

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("Enter elements of the matrix:\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);  
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];  
        }
    }

    printf("Transpose of the matrix:\n");

    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);  
        }
        printf("\n");
    }
    
    return 0;
}