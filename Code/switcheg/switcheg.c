#include <stdio.h>

int main(void) {
    int i = 2;
    switch (i) {
        case 1:
                printf("I am in case 1 \n");
                break;
        case 2:
                printf("I am in case 2 \n");
                break;
        case 3: 
                printf("I am in case 3 \n");
                break;
        default: 
                printf("Not an Option");
                break;
    }
}