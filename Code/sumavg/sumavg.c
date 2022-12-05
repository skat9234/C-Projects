#include <stdio.h>

void stats(int *, int *);

int main(void) {
   int sum, avg;
   stats(&sum, &avg);
   printf("Sum = %d \n Average = %d", sum, avg);
}

void stats(int *sum, int *avg) {
    int arr[s];
    printf("Enter S Integers \n");
    for (int i = 0; i < s; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < s; i++) {
        *sum = *sum + arr[i];
    }
    *avg = *sum/s
}