#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    int i, max = 0;
    char result;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find maximum occurring character
    for(i = 0; i < 256; i++) {
        if(count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("Maximum occurring character: %c\n", result);

    return 0;
}