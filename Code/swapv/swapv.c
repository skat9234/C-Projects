#include <stdio.h>

void swapv(int x, int y);

int main(void) {
    int a = 10, b = 20;
    swapv(a,b);
    printf("a=%d b=%d\n", a,b);
}

void snapv(int x, int y) {
    int t;
    t = x;
    x = y;
    y = t;
    printf("x=%d y=%d\n",x,y);
}