#include <stdio.h>
#include <string.h>

#define MAX 100

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[MAX];
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. View Items\n");
        printf("3. Search Item\n");
        printf("4. Update Item\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:  // Add item
                if (n >= MAX) {
                    printf("Inventory full!\n");
                } else {
                    printf("Enter Item ID: ");
                    scanf("%d", &items[n].id);

                    printf("Enter Item Name: ");
                    scanf(" %[^\n]", items[n].name);

                    printf("Enter Quantity: ");
                    scanf("%d", &items[n].quantity);

                    printf("Enter Price: ");
                    scanf("%f", &items[n].price);

                    n++;
                    printf("Item added successfully!\n");
                }
                break;

            case 2:  // View items
                if (n == 0) {
                    printf("No items in inventory.\n");
                } else {
                    printf("\nID\tName\t\tQuantity\tPrice\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%d\t\t%.2f\n",
                               items[i].id,
                               items[i].name,
                               items[i].quantity,
                               items[i].price);
                    }
                }
                break;

            case 3:  // Search item
                printf("Enter Item ID to search: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (items[i].id == id) {
                        printf("Item Found!\n");
                        printf("Name: %s\n", items[i].name);
                        printf("Quantity: %d\n", items[i].quantity);
                        printf("Price: %.2f\n", items[i].price);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Item not found.\n");
                }
                break;

            case 4:  // Update item
                printf("Enter Item ID to update: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (items[i].id == id) {
                        printf("Enter new quantity: ");
                        scanf("%d", &items[i].quantity);

                        printf("Enter new price: ");
                        scanf("%f", &items[i].price);

                        printf("Item updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Item not found.\n");
                }
                break;

            case 5:  // Delete item
                printf("Enter Item ID to delete: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (items[i].id == id) {
                        for (int j = i; j < n - 1; j++) {
                            items[j] = items[j + 1];
                        }
                        n--;
                        printf("Item deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Item not found.\n");
                }
                break;

            case 6:
                printf("Exiting Inventory System...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}