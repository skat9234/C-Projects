#include <stdio.h>

void main()
{
    float c;
    float f;

    printf("Enter the temperature(In Celsius): ");
    scanf("%f", &c);

    f = c*9/5 + 32;
    printf("The temperature (in farenheit): %f", f);


}