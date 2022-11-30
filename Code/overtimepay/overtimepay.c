#include<stdio.h>
int main(void);
 float otpay;
 int hour, i=1;
while(i <= 10){
    printf("Please enter number of hours worked : ");
    scanf("%d",&hour);

    if(hour>40){
        otpay=(hour-40)*120
    }
    else{
        otpay=0;
    }

    printf("The overtime payment is : %d",otpyay);

 }