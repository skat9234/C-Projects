#include <stdio.h>

int main(void) {
    int i = 1, j = 1;
    while(i++ <=10) {
        while(j++ <= 200) {
            if (j == 150) {
                break;
            }
            else {
                printf("i = %d j = %d \n", i, j);
            }
        }
    }
}