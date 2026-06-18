/*Write a program to rotate array left.*/

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
    //store the first element
    temp = arr[0];

    // shift elements left
    for(i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // put first element at last
    arr[n - 1] = temp;

    printf("Array after left rotation by 1 position:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}