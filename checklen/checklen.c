// Write a C program to count the number of alphabets and the number of digits in a string

#include <stdio.h>
#include <ctype.h>

void count(char a[]) {
    int count_a = 0, count_d = 0;
    for (int i = 0; a[i]!='\0'; i++) {
        if (isalpha(a[i])) {
            count_a++;
        }
        if (isdigit(a[i])) {
            count_d++;
        }
    }
    printf("No of Alphabets = %d", count_a);
    printf("\n No. Of Digits = %d", count_d);
}

int main(void) {
    char a[] = "Hello World! 100101";
    count(a);
}

