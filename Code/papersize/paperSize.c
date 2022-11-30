#include <stdio.h>

int main(void) {
    int height=1189, width=841, n;

    for (int i=0; i<9; i++) {
        printf("\n A%d = %d x %d", i, width, height);
        n = height;
        height = width;
        width = n/2;

    }

}