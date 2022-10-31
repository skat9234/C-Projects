// Write a function power taking two variable to cal the value of a^b

#include <stdio.h>  

    int Power(float x, int y);
    int main(void) {
        float x, pow;
        int y;
        printf("Enter a number: ");
        scanf("%f", &x);
        printf("Enter the Power: ");
        scanf("%d", &y);
        pow = Power(x,y);
        printf("%f Raised to the power %d = %f \n",x,y,pow);
    }
    
    int Power(float x, int y) {
        int i;
        float p=1;
        for(i=1; i<=y; i++) {
            p *= x;
        }
        return p;
    }