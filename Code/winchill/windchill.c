#include <stdio.h>
#include <math.h>

int main(){
    float t,v,wcf;

    printf("Enter the value of temperature\nt");
    scanf("%f",&t);

    printf("Enter the value of wind velocity\nv");
    scanf("%f",&v);

    wcf=(35.74+0.6215*t+10.4275*t-35.75)*pow(v,0.16);

    printf("The felt air temperature is %f",wcf);

    return 0;
    
}