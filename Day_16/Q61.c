/*write a program to find missing number in array.*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n (array should contain numbers from 1 to n with one missing): ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Sum of first n natural numbers
    int total = n * (n + 1) / 2;

    int missing = total - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}