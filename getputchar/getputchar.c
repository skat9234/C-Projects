#include <stdio.h>

int main(void) {
    char ch = 'A';
    printf("\nType any alphabet: ");
    ch = getchar();
    printf("You Typed: ");
    putchar(ch);
}