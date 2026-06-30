#include <stdio.h>

int main() {
    int choice;
    int a, b;

    do {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice) {
            case 1:
                printf("Result = %d\n", a + b);
                break;

            case 2:
                printf("Result = %d\n", a - b);
                break;

            case 3:
                printf("Result = %d\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Result = %.2f\n", (float)a / b);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;

            case 5:
                if (b != 0)
                    printf("Result = %d\n", a % b);
                else
                    printf("Error! Modulus by zero is not allowed.\n");
                break;

            case 6:
                printf("Thank you for using the calculator!\n");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }

    } while (choice != 6);

    return 0;
}