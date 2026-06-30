#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        printf("Book Name: ");
        scanf(" %[^\n]", books[i].name);

        printf("Author Name: ");
        scanf(" %[^\n]", books[i].author);
    }

    // Display book details
    printf("\n\nLibrary Records\n");

    for(i = 0; i < n; i++) {
        printf("\n----------------------\n");
        printf("Book ID      : %d\n", books[i].id);
        printf("Book Name    : %s\n", books[i].name);
        printf("Author Name  : %s\n", books[i].author);
    }

    return 0;
}