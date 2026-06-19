/*Write a program to subtract matrics.*/

#include<stdio.h>
int main()
{
    int a[2][2] = {{5, 8}, {6, 4}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int diff[2][2];

    // Subtract matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}