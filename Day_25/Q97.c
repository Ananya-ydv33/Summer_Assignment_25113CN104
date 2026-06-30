#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n, m, i, j, k;

    // Input first array
    printf("Enter size of first sorted array: ");
    scanf("%d", &n);

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input second array
    printf("Enter size of second sorted array: ");
    scanf("%d", &m);

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Merge process
    i = 0; j = 0; k = 0;

    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Copy remaining elements
    while(i < n) {
        c[k++] = a[i++];
    }

    while(j < m) {
        c[k++] = b[j++];
    }

    // Output merged array
    printf("Merged sorted array:\n");
    for(i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}