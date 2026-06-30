#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee e[MAX];
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:  // Add employee
                if (n >= MAX) {
                    printf("Database full!\n");
                } else {
                    printf("Enter Employee ID: ");
                    scanf("%d", &e[n].id);

                    printf("Enter Name: ");
                    scanf(" %[^\n]", e[n].name);

                    printf("Enter Department: ");
                    scanf(" %[^\n]", e[n].department);

                    printf("Enter Salary: ");
                    scanf("%f", &e[n].salary);

                    n++;
                    printf("Employee added successfully!\n");
                }
                break;

            case 2:  // Display employees
                if (n == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\nID\tName\t\tDepartment\tSalary\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%s\t\t%.2f\n",
                               e[i].id,
                               e[i].name,
                               e[i].department,
                               e[i].salary);
                    }
                }
                break;

            case 3:  // Search employee
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (e[i].id == id) {
                        printf("Employee Found!\n");
                        printf("Name: %s\n", e[i].name);
                        printf("Department: %s\n", e[i].department);
                        printf("Salary: %.2f\n", e[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Employee not found.\n");
                }
                break;

            case 4:  // Update employee
                printf("Enter Employee ID to update: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (e[i].id == id) {
                        printf("Enter new Name: ");
                        scanf(" %[^\n]", e[i].name);

                        printf("Enter new Department: ");
                        scanf(" %[^\n]", e[i].department);

                        printf("Enter new Salary: ");
                        scanf("%f", &e[i].salary);

                        printf("Employee updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Employee not found.\n");
                }
                break;

            case 5:  // Delete employee
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (e[i].id == id) {
                        for (int j = i; j < n - 1; j++) {
                            e[j] = e[j + 1];
                        }
                        n--;
                        printf("Employee deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Employee not found.\n");
                }
                break;

            case 6:
                printf("Exiting Employee Management System...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}