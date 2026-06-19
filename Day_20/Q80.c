/*Write a program to find column wise sum.*/

#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Column-wise sum:\n");

    for (int j = 0; j < 3; j++) {
        int sum = 0;

        for (int i = 0; i < 3; i++) {
            sum += a[i][j];
        }

        printf("Column %d sum = %d\n", j + 1, sum);
    }

    return 0;
}