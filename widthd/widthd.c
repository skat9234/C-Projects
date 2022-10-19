#include <stdio.h>

int main() {
    int weight = 63;
    printf("1d  => Weight is %d kg \n", weight);
    printf("2d  => Weight is %2d kg \n", weight);
    printf("4d  => Weight is %4d kg \n", weight);
    printf("-6d => Weight is %-6d kg \n", weight);
    printf("1d  => Weight is %1d kg \n", weight);
    
}