/*Write a program to union of aaray.*/

#include<stdio.h>
int main()
{
   int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int unionArr[n1 + n2];
    int size = 0;
 // Add elements of first array
    for (int i = 0; i < n1; i++) {
        unionArr[size++] = arr1[i];
    }

    // Add unique elements from second array
    for (int i = 0; i < n2; i++) {
        int found = 0;

        for (int j = 0; j < size; j++) {
            if (arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            unionArr[size++] = arr2[i];
        }
    }

    printf("Union of Arrays: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}