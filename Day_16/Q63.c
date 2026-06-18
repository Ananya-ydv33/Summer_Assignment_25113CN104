/*write a program to find pair with givem sum.*/

#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the required sum: ");
    scanf("%d", &sum);

    printf("Pairs with sum %d are:\n", sum);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}