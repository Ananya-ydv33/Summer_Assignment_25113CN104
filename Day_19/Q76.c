/*Write a program to find diagonal sum.*/

#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < 3; i++) {
        primarySum += a[i][i];           // Primary diagonal
        secondarySum += a[i][2 - i];     // Secondary diagonal
    }

    printf("Primary diagonal sum = %d\n", primarySum);
    printf("Secondary diagonal sum = %d\n", secondarySum);

    return 0;
}