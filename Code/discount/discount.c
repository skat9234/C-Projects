#include<stdio.h>

int main(){
  float price,quantity,total,discounted,x;

  printf("Enter the price of one item\n ");
  scanf("%f",&price);

  printf("Enter the number of items purchased\n");
  scanf("%f",&quantity);

  total=price*quantity;
  printf("your total price of purchase is : %f",total);

  if (total>=1000){
   x=0.1*total;
   discounted=total-x;
   printf("\ncongratulations, you have availed a discount of ten percent....your new total is : %f",discounted);
  }
  return 0;
}