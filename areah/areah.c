#include <stdio.h>
#include <math.h>

int main(void) {
    float s1, s2, s3, s, area;
    
    printf("Enter the length of three sides of triangle\n");
    scanf("%f %f %f", &s1, &s2, &s3);
    s = (s1 + s2 + s3)/2;
    area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("Area of triangle : %0.4f\n", area);
}