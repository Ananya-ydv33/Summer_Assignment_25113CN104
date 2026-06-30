#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    char course[50];
    float marks;
};

int main() {
    struct Student s[MAX];
    int n = 0, choice, i, roll, found;

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:  // Add student
                if (n >= MAX) {
                    printf("Database full!\n");
                } else {
                    printf("Enter Roll No: ");
                    scanf("%d", &s[n].roll);

                    printf("Enter Name: ");
                    scanf(" %[^\n]", s[n].name);

                    printf("Enter Course: ");
                    scanf(" %[^\n]", s[n].course);

                    printf("Enter Marks: ");
                    scanf("%f", &s[n].marks);

                    n++;
                    printf("Student added successfully!\n");
                }
                break;

            case 2:  // Display
                if (n == 0) {
                    printf("No student records found.\n");
                } else {
                    printf("\nRoll\tName\t\tCourse\t\tMarks\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%s\t\t%.2f\n",
                               s[i].roll,
                               s[i].name,
                               s[i].course,
                               s[i].marks);
                    }
                }
                break;

            case 3:  // Search
                printf("Enter Roll No to search: ");
                scanf("%d", &roll);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("Student Found!\n");
                        printf("Name: %s\n", s[i].name);
                        printf("Course: %s\n", s[i].course);
                        printf("Marks: %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Student not found.\n");
                }
                break;

            case 4:  // Update
                printf("Enter Roll No to update: ");
                scanf("%d", &roll);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("Enter new Name: ");
                        scanf(" %[^\n]", s[i].name);

                        printf("Enter new Course: ");
                        scanf(" %[^\n]", s[i].course);

                        printf("Enter new Marks: ");
                        scanf("%f", &s[i].marks);

                        printf("Record updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Student not found.\n");
                }
                break;

            case 5:  // Delete
                printf("Enter Roll No to delete: ");
                scanf("%d", &roll);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        for (int j = i; j < n - 1; j++) {
                            s[j] = s[j + 1];
                        }
                        n--;
                        printf("Student deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Student not found.\n");
                }
                break;

            case 6:
                printf("Exiting Student Record System...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}