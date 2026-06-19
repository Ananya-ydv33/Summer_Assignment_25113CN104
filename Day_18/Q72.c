/*Write a program to sort array in descending order.*/

#include<stdio.h>
int main()
{
   int arr[] = {12, 45, 7, 23, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array in descending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0; 
}