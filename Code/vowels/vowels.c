// Write a C Program to accept a line of text form the user and perform the following:
// 1. Count Total no. of vowels
// 2. Count Total no. of words
// 3. Convert each lowercase letter to uppercase and vice versa

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char str[20];
    int i, vowels=0, words=0;
    printf("Enter a String: ");
    gets(str);
    printf("\n %s", str);
    for (i=0; i< strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
        if (str[i] == ' ') {
            words++;
        }
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
            continue;
        }
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
            continue;
        }
        printf("\n The final string is %s", str);
        printf("\n The number of vowels are %d", vowels);
        printf("\n The number of words are %d", words + 1);
    }
}