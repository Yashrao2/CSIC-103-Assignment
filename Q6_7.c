#include <stdio.h>

int main() {
    printf("Yash Kumar, 125113026\n");
    FILE *fp;
    char filename[50] = "numbers.txt";
    int num;
    int count = 0;
    double sum = 0.0;

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", sum / count);

    return 0;
}
