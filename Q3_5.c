#include <stdio.h>
struct employee {
    char name[50];
    float basic;
    float da;
    float hra;
};
int main() {
    printf("Yash Kumar, 125113026\n");
    struct employee emp;

    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter basic salary: ");
    scanf("%f", &emp.basic);

    printf("Enter DA: ");
    scanf("%f", &emp.da);

    printf("Enter HRA: ");
    scanf("%f", &emp.hra);

    float gross_salary = emp.basic + emp.da + emp.hra;

    printf("Gross Salary of %s:%.2f\n", emp.name, gross_salary);

    return 0;
}