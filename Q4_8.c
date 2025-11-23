#include <stdio.h>
int main() {
    printf("Yash Kumar, 125113026\n");

    int var = 42;
    int *ptr = &var;         
    int **ptr_to_ptr = &ptr; 

    printf("Value of var: %d\n", var);
    printf("Value via ptr: %d\n", *ptr);
    printf("Value via ptr_to_ptr: %d\n", **ptr_to_ptr);

    **ptr_to_ptr = 100;

    printf("New value of var after modification: %d\n", var);

    return 0;
}