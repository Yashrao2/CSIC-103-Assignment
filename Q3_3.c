#include <stdio.h>
#include <string.h> 
struct book {
    char title[100];
    char author[100];
    float price;
};
int main() {
    printf("Yash Kumar, 125113026\n");
    struct book books[5] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 450.0},
        {"1984", "George Orwell", 550.0},
        {"To Kill a Mockingbird", "Harper Lee", 600.0},
        {"The Catcher in the Rye", "J.D. Salinger", 300.0},
        {"Moby Dick", "Herman Melville", 750.0}
    };
    printf("Books priced above 500:\n");
    for (int i = 0; i < 5; i++) {
        if (books[i].price > 500.0) {
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }
    return 0;
}

