#include <stdio.h>

void main() {
    int a;

    printf("Enter a positive number: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Please enter a positive Number: ");
    }
    else if (a == 0) {
        printf("Please enter a positive Number: ");
    }
    else if (a%2 == 0) {
        printf("The number is EVEN");
    }
    else {
        printf("The number is ODD");
    }
}