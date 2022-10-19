#include<stdio.h>
#include<math.h>

int main(){
    float x,bunty;

    printf("enter the value of angle in degrees\n");
    scanf("%f",&x);

    bunty=x*0.0174532;

    printf("The value of angle in radians is : %f",bunty);
    printf("\nThe value of sin is : %f",sin(bunty));
    printf("\nThe value of cos is : %f",cos(bunty));
    printf("\nThe value of tan is : %f",tan(bunty));

    return 0;
}