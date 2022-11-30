#include <stdio.h>  
  
    int calsum(int x, int y, int z);
    int main(void) {
       int a,b,c,sum;
       printf("Enter any three numbers: \n");
       scanf("%d%d%d", &a,&b,&c);
       sum = calsum(a,b,c);
       printf("Sum = %d \n", sum);
    }

    int calsum(int x, int y, int z) {
        int d;
        d = x+y+z;
        return(d);
    } 