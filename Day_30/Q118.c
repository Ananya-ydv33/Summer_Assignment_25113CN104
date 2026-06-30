#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;   // 0 = available, 1 = issued
};

int main() {
    struct Book b[MAX];
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:  // Add book
                if (n >= MAX) {
                    printf("Library is full!\n");
                } else {
                    printf("Enter Book ID: ");
                    scanf("%d", &b[n].id);

                    printf("Enter Book Title: ");
                    scanf(" %[^\n]", b[n].title);

                    printf("Enter Author Name: ");
                    scanf(" %[^\n]", b[n].author);

                    b[n].issued = 0;
                    n++;

                    printf("Book added successfully!\n");
                }
                break;

            case 2:  // Display books
                if (n == 0) {
                    printf("No books in library.\n");
                } else {
                    printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%s\t\t%s\n",
                               b[i].id,
                               b[i].title,
                               b[i].author,
                               b[i].issued ? "Issued" : "Available");
                    }
                }
                break;

            case 3:  // Search book
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (b[i].id == id) {
                        printf("Book Found!\n");
                        printf("Title: %s\n", b[i].title);
                        printf("Author: %s\n", b[i].author);
                        printf("Status: %s\n", b[i].issued ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found.\n");
                }
                break;

            case 4:  // Issue book
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (b[i].id == id) {
                        if (b[i].issued == 0) {
                            b[i].issued = 1;
                            printf("Book issued successfully.\n");
                        } else {
                            printf("Book is already issued.\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found.\n");
                }
                break;

            case 5:  // Return book
                printf("Enter Book ID to return: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (b[i].id == id) {
                        if (b[i].issued == 1) {
                            b[i].issued = 0;
                            printf("Book returned successfully.\n");
                        } else {
                            printf("Book was not issued.\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found.\n");
                }
                break;

            case 6:  // Delete book
                printf("Enter Book ID to delete: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (b[i].id == id) {
                        for (int j = i; j < n - 1; j++) {
                            b[j] = b[j + 1];
                        }
                        n--;
                        printf("Book deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found.\n");
                }
                break;

            case 7:
                printf("Exiting Mini Library System...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 7);

    return 0;
}