#include <stdio.h>  
struct student {
    char name[50];
    int marks;
};
int main() {
    printf("Yash Kumar, 125113026\n");
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];
    int total_marks = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        total_marks += students[i].marks;
    }

    float average = (float)total_marks / n;
    printf("Average marks of %d students: %.2f\n", n, average);

    return 0;
}