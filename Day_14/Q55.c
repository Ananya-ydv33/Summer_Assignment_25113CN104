/*Write a program to second largest element*/

#include<stdio.h>
int main()
{
    int n,i,largest,secondLargest,MIN;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = MIN;
    secondLargest = MIN;

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == MIN)
        printf("Second largest element does not exist.\n");
    else
        printf("Second largest element = %d\n", secondLargest);

    return 0;
}