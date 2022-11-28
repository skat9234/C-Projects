// Write a C Program to generate n prime numbers

// #include <stdio.h>

// int main(void) {
//     int n, i, j;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     printf("Prime Numbers are: \n");
//     for (i=2; i<=n; i++) {
//         int c=0;
//         for (j=1; j<=i; j++) {
//             if(i%j==0) {
//                 c++
//             }
//         }
//     } 

// }

#include<stdio.h>

int main(void)
{
    int n,i = 3,count,c;
    
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    printf("Prime numbers are: \n");    
    if(n>=3) {
        printf("\n First %d prime numbers are: \n", n);
        printf("2 \n");
    }
    for (count = 2; count<= n; i++) {
        for (c = 2; c < i; c++) {
            if(i%c == 0) {
            break;
        }
        }
        if(c == i) {
            printf("%d \n", i);
            count++;
        }
        continue;
    }
    
}