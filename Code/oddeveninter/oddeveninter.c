// Write a program that interchanges elements at odd positons with elements at even positons 
#include <stdio.h>

int main(void) {
    int i, num[10];

    printf("Enter 10 numbers: ");
    for (i = 0; i<=9; i++) {
        int t = num[i];
        num[i] = num[i+1];
        num[i+1] = t;
    }
    for (i = 0; i<=9; i++) {
        printf("%d", num[i]);
    }


}