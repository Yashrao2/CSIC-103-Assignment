#include <stdio.h>
struct employee {
    char name[50];
    int id;
    float salary;
};
void display_employee(struct employee emp) {
    printf("Employee Details:\n");
    printf("Name: %s", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
}
int main() {
    printf("Yash Kumar, 125113026\n");

    struct employee emp;

    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);   
    
    display_employee(emp);
    return 0;
}   