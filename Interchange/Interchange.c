// Write a C Program to interchange two numbers without using a third variable
#include <stdio.h>

void main() {
    int a;
    int b;

    printf("Enter the first Number: ");
    scanf("%d", &a);
    printf("Enter the second Number: ");
    scanf("%d", &b);

    a=a+b;  
    b=a-b;    
    a=a-b;  

    printf("%d ", a);
    printf("%d", b);

}