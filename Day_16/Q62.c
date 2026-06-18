/*write a program to find maximum frequency element.*/

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxCount = 0;
    int maxElement = arr[0];

    for(i = 0; i < n; i++) {
        int count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
     }

    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Maximum frequency = %d\n", maxCount);

    return 0;
}