/*Write a program to check symmetric matrix.*/

#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    int isSymmetric = 1;

    // Check symmetry
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is Not Symmetric\n");

    return 0;
}