#include <stdio.h>
#include <stdlib.h>
struct student {
    int id;
    char name[50];
    float marks;
};
void add_student_record(const char *filename) {
    struct student s;
    FILE *file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter student ID: ");
    scanf("%d", &s.id);
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter student marks: ");
    scanf("%f", &s.marks);
    fprintf(file, "%d %s %.2f\n", s.id, s.name, s.marks);
    fclose(file);
    printf("Student record added successfully.\n");
}
void display_student_records(const char *filename) {
    struct student s;
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("Student Records:\n");
    printf("ID\tName\tMarks\n");
    while (fscanf(file, "%d %s %f", &s.id, s.name, &s.marks) != EOF) {
        printf("%d\t%s\t%.2f\n", s.id, s.name, s.marks);
    }
    fclose(file);
}
int main() {
    printf("Yash Kumar, 125113026\n");
    const char *filename = "students.txt";
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_student_record(filename);
                break;
            case 2:
                display_student_records(filename);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
