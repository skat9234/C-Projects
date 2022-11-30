#include<stdio.h>
#include<math.h>

int main(){
    float x,y,r,theta;

    printf("enter coordinates x and y");
    scanf("%f","%f",&x,&y);

    r=sqrt(x*x+y*y);
    theta= atan2(y,x);

    printf("%f","%f",r,theta);
    return 0;

}