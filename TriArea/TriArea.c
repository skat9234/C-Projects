8#include <stdio.h>

void main() {
    float h;
    float b;
    float area;

    printf("Enter the Base: ");
    scanf("%f", &b);
    printf("Enter the Height: ");
    scanf("%f", &h);

    area = 0.5*b*h;

    printf("%f", area);
    
}
