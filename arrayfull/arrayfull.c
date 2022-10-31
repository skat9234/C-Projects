#include <stdio.h>

int minarray(int arr[], int size) {
    int min = arr[0];
    int i = 0;
    for (i=0; i<size; i++) {
        if (min>arr[i]) {
            min = arr[i];
        }
    }
    return (min);
}

int main(void) {
    int nums[] = {2,4,6,8};
    int size = 4;
    int m = minarray(nums, size);
    printf("%d is the minimum value \n", m);
}