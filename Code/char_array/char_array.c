// Write a C Program to declare a character array using function malloc the size has to be input from the user
// Insert elements into the array using a FOR Loop and count the no of vowels in the character array.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    int max, i, *p, count=0;
    char *f;
    printf("Enter Array Size: ");
    scanf("%d", &max);
    p = (char *) malloc(max * sizeof(char));
    int c = 65;
    for (i = 0; i < max; i++) { 
        scanf("%c", p[i]);
     }
    for (i = 0; i < max; i++) {
        char c = tolower(p[i]);
        if(c == "a" || c == "e" || c == "i" || c == "o" || c == "u" ) {
            count++;
        }
    }
    printf("The Count of Vowels is: %d", count);
    

}