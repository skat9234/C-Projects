#include <stdio.h>

int main(void) {
    int max;
    printf("Enter the no. of values: ");
    scanf("%d", &max);
    int arr[max];
    for (int i = 0; i < max; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < max; i++) {
        printf("%d", arr[i]);
    }
}