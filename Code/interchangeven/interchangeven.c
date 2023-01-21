// Write a C Program that interchanges elements at odd positions with elemets at even position in a array of 10 elements

#include <stdio.h>

int main(void) {
    int num[] = {12,14,16,18,20,22,1,9,4,3}, i, t;
    printf("Original Array: ");
    for (i=0; i<=9; i++) {
        printf("%d\t", num[i]);
    }
    for (i=0; i<=9; i=i+2) {
        t=num[i];
        num[i] = num[i+1];
        num[i+1] = t;
    }
    printf("\n Interchanged Array: ");
    for (i=0; i<=9; i++) {
        printf("%d\t", num[i]);
    }


}