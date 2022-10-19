#include <stdio.h>

void main() {
    int a,b,c;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("Enter a number: ");
    scanf("%d", &c);

    if (a > b) {
        if (b > c) {
            printf("a is the greatest");
        }
        else {
            printf("c is the greatest");
        }
    }
    else if (b > c) {
        printf("b is the greatest");
    }    
    else {
        printf("c is the greatest");
    }

}