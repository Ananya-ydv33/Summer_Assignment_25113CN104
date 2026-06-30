#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice, i, len, equal;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                len = strlen(str1);
                printf("Length = %d\n", len);
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied String: %s\n", temp);
                break;

            case 3:
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);
                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 4:
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);
                equal = strcmp(str1, str2);

                if (equal == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                strcpy(temp, str1);
                len = strlen(temp);

                printf("Reversed String: ");
                for (i = len - 1; i >= 0; i--) {
                    printf("%c", temp[i]);
                }
                printf("\n");
                break;

            case 6:
                strcpy(temp, str1);
                for (i = 0; temp[i] != '\0'; i++) {
                    temp[i] = toupper(temp[i]);
                }
                printf("Uppercase: %s\n", temp);
                break;

            case 7:
                strcpy(temp, str1);
                for (i = 0; temp[i] != '\0'; i++) {
                    temp[i] = tolower(temp[i]);
                }
                printf("Lowercase: %s\n", temp);
                break;

            case 8:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 8);

    return 0;
}