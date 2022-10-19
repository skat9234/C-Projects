#include <stdio.h>

int main(void) {
    int current = 2022, year, age;

    printf("Enter your birth year");
    scanf("%d", &year);

    age = current - year;
    printf("your age is: %d", age);
}