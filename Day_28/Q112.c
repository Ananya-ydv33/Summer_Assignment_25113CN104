#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c;
    int choice;
    int contactExists = 0;

    do {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contact\n");
        printf("3. Update Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (contactExists) {
                    printf("A contact already exists.\n");
                } else {
                    printf("Enter Name: ");
                    scanf(" %[^\n]", c.name);

                    printf("Enter Phone Number: ");
                    scanf("%s", c.phone);

                    printf("Enter Email: ");
                    scanf("%s", c.email);

                    contactExists = 1;
                    printf("Contact added successfully.\n");
                }
                break;

            case 2:
                if (!contactExists) {
                    printf("No contact found.\n");
                } else {
                    printf("\n----- Contact Details -----\n");
                    printf("Name  : %s\n", c.name);
                    printf("Phone : %s\n", c.phone);
                    printf("Email : %s\n", c.email);
                }
                break;

            case 3:
                if (!contactExists) {
                    printf("No contact found to update.\n");
                } else {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", c.name);

                    printf("Enter New Phone Number: ");
                    scanf("%s", c.phone);

                    printf("Enter New Email: ");
                    scanf("%s", c.email);

                    printf("Contact updated successfully.\n");
                }
                break;

            case 4:
                if (!contactExists) {
                    printf("No contact found to delete.\n");
                } else {
                    contactExists = 0;
                    printf("Contact deleted successfully.\n");
                }
                break;

            case 5:
                printf("Exiting Contact Management System...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}