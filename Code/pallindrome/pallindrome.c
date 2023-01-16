// Write a C Program to determine if the given word is a pallindrome or not

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[20], strReversed[20];;
    int strSize = strlen(str), j=0;;
    printf("Enter a String: ");
    scanf("%s", str);
    for (int i= strSize; i>=0; --i) {
        strReversed[j] = str[i];
        j++;
    }
    if (strcmp(str, strReversed) == 0) {
        printf("\n %s is a Pallindrome", str);
    }
    else {
        printf("\n %s is not a Pallindrome", str);
    }
}