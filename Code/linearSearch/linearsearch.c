// Write A C Program to Perform Linear Search

#include <stdio.h>

int main(void) {
    int arr[10], search, c, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d integers \n", n);
    for (c=0; c<n; c++) {
        scanf("%d", &arr[c]);
    }
    printf("Enter a number to Search: ");
    scanf("%d", &search);
    for (c=0;c<n;c++) {
        if(arr[c] == search) {
            printf("%d is the present at location %d \n", search, c+1);
            break;
        }
        if(c==n) {
            printf("%d isn't found \n", search);
        }
    }   
}