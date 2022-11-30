#include <stdio.h>

int main(void) {
    char firstname1[] = "Sandy";
    char surname1[] = "Malya";
    char firstname2[] = "Ajaykumar";
    char surname2[] = "Gomes";
    char column1[] = "First\n";
    char column2[] = "Last \n";
    printf("%20s %20s \a \n", firstname1, surname1); //dont copy
    printf("%20s %20s \a \n", firstname1, surname1);
    printf("%20s %20s \a \n", firstname2, surname2);
}