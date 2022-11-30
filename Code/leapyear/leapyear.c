#include <stdio.h>

int main(void) {
    int a = 2020;
    if(a%100 == 0) {
        if(1%400 == 0) {
            printf("Leap Year");
        }
        else {
            printf("Not a Leap Year");
        }
    }
    else {
        if(a%4 == 0) {
            printf("Leap Year\n");
        }
        else {
            printf("Not a Leap Year");
        }
    }
}