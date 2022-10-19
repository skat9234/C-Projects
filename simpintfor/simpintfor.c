#include <stdio.h>

int main(void) {
    int p,n, count;
    float r,s;

    for (count =1; count <= 5; count++) {
        printf("Enter the values of p,n and r");
        scanf("%d %d %f", &p, &n, &r);
        s =  p*n*r/100;
        printf("Simple Interest = Rs.%f \n", s);
    }
}