#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter any one of the alphabets a,b or c: ");
    scanf("%c", &ch);

    switch(ch) {
        case 'a':
        case 'A':
                printf("You've entered 'a'");
                break;
        case 'b':
        case 'B':
                printf("You've entered 'b");
                break;
        default: 
                break;

    } 
}