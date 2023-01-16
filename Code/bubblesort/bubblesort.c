// Bubble Sort in C

#include <stdio.h>

int main(void) {
    int arr[10], i, j, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d integers \n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The elements before Sorting: ");
    for (i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    for (j=1; j<=n; j++) {
        for (i=0; i<=n-1; i++) {
            int t= arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = t;
        }
    }
    
    printf("\n The elements after the sorting are: ");
    for (i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

}