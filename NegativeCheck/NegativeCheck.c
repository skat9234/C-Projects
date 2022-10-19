#include <stdio.h>

void main() 
{
        int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0) {
        printf(" The number is greater than 0");
    }
    else if (a == 0) {
        printf("The number is equal to 0");
    }
    else {
        printf("The Number is Less than 0");
    }
}
