#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

void set_student(struct Student *s, const char *name, int marks) {
    strncpy(s->name, name, sizeof s->name - 1);
    s->name[sizeof s->name - 1] = '\0';
    s->marks = marks;
}

void add_marks(struct Student *s, int delta) {
    (*s).marks += delta; 
}

int main(void) {
    printf("Yash Kumar, 125113026\n");
    struct Student s1;
    set_student(&s1, "Alice", 82);   

    printf("Before: %s -> %d\n", s1.name, s1.marks);

    struct Student *p = &s1;          
    p->marks = 90;                    
    printf("After p->marks = 90: %s -> %d\n", s1.name, s1.marks);

    (*p).marks = 88;
    printf("After (*p).marks = 88: %s -> %d\n", s1.name, s1.marks);

    struct Student *s2 = malloc(sizeof *s2);
    if (!s2) return 1;
    set_student(s2, "Bob", 75);
    printf("Heap student: %s -> %d\n", s2->name, s2->marks);

    add_marks(s2, 5);                 
    printf("After add_marks(s2,5): %s -> %d\n", s2->name, s2->marks);

    free(s2);

    return 0;
}



