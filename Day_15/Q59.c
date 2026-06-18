/*Write a program to rotate array right.*/

#include<stdio.h>
int main()
{
    int n,i,temp;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // store last element
    temp = arr[n - 1];

    // shift elements to right
    for(i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // place last element at first
    arr[0] = temp;

    printf("Array after right rotation by 1 position:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}