// Write a C program using a function to calculate the factorial val of any int thru keyboard

#include <stdio.h>  

    int fact(int a);
    int main(void) {
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        fact(a);
    }
    
    int fact(int a) {
        int fact;
        for (int i=1; i<=a; i++) {    
        fact=fact*i;    
        }    
        printf("The Factorial is: %d", fact);
    }