// An array contains 10 integers, receive the number to be searched in the array as input. Write a program to search this number
// in the array and display the number of times it occurs in the array

#include <stdio.h> 

int main(void) {
    int arr1[10], i, z, counter=0;
    printf("Enter the elements of the array: \n");
    for (i=0; i<=9; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &z);
    for (i=0; i<=9; i++) {
        if (arr1[i] == z) {
            counter++;
        }
    }
    printf("The number is %d and it occurs %d times", z, counter);
}