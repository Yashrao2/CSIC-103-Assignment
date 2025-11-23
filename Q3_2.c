#include <stdio.h>  
struct Student {
    char name[50];
    int marks;
};
int main() {
    printf("Yash Kumar, 125113026\n");

    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    struct Student top_student = students[0];
    for (int i = 1; i < 3; i++) {
        if (students[i].marks > top_student.marks) {
            top_student = students[i];
        }
    }

    printf("Top student: %s with marks %d\n", top_student.name, top_student.marks);
    return 0;
}
