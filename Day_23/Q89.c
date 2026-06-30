#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int len = strlen(str);
    int found = 0;

    for (int i = 0; i < len; i++) {
        int count = 0;

        for (int j = 0; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No non-repeating character found.\n");
    }

    return 0;
}