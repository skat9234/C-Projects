#include <stdio.h>  

    void square(float a);
    int main(void) {
        float a;
        printf("Enter a number: ");
        scanf("%f", &a);
        square(a);
    }
    
    void square(float a) {
        float b;
        b=a*a;
        printf("%f", b);
    }