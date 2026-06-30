#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    int i, j, found;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; s1[i] != '\0'; i++) {
        found = 0;

        for(j = 0; s2[j] != '\0'; j++) {
            if(s1[i] == s2[j]) {
                s2[j] = '*';   // Mark character as used
                found = 1;
                break;
            }
        }

        if(found == 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}