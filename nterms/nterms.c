// 2+4+6+....+n terms
#include <stdio.h> 

int main(void) {
    int n, sum = 0;

    printf("Enter no. of terms: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        sum = sum + i;
        
    }
    printf("The sum of terms is: %d", sum);
}

