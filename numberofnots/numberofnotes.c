#include <stdio.h>
int main(){
    int amount, nohun, nofifty, noten, nofive,notwo, noone, total;
    printf("Enter the amount");
    scanf("%d",&amount);
    nohun=amount/100;
    amount=amount%100;

    nofifty=amount/50;
    amount=amount%50;

    noten=amount/10;
    amount=amount%10;

    notwo=amount/2;
    amount=amount%2;

    noone=amount/1;
    amount=amount%1;

    total = nohun+nofifty+noten+notwo+noone;

    printf("smallest no. of notes = %d",total);

    return 0;
}