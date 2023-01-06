// Write a C Program to find the smallest number in an array

#include <stdio.h>

int main(void) {
    int a[25], num, smallest;

    printf("Enter the total number of elements: ");
    scanf("%d", &num);
    printf("Enter the elements: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }
    smallest = a[0];
    for (int i = 0; i < num; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }
    printf("The smallest number is %d", smallest);

}