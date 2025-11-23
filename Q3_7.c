#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Student {
    char name[50];
    struct Date dob;
};
int main() {
    printf("Yash Kumar, 125113026\n");

    struct Student students[3];
    for (int i = 0; i < 3; i++) {

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter date of birth (dd mm yyyy) of student %d: ", i + 1);
        scanf("%d %d %d", &students[i].dob.day, &students[i].dob.month, &students[i].dob.year);

    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, DOB: %02d/%02d/%04d,\n",
               students[i].name, 
               students[i].dob.day, 
               students[i].dob.month, 
               students[i].dob.year);
        }

    return 0;
}

