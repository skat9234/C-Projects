#include <stdio.h>  
  
int main(void)  
{  
    // initializa
    int num1 = 0, num2 = 1, num3, count;  
  
    printf("Enter Limit: ");  
    scanf("%d", &count);  
    printf("\n The Fibonacci Series");
    printf("\n%d \n%d \n", num1, num2);  
  
    count = count - 2;  
  
    while(count)  
    {  
        num3 = num1 + num2;  
        printf("%d\n", num3);  
        num1 = num2;  
        num2 = num3;  
        count = count - 1;  
    }  
  
}  