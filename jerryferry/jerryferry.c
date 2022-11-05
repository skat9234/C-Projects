#include <stdio.h>
#include <string.h>

int main(void) {
    int i,j,k;
    char string1[] = "Jerry", string2[] = "Ferry";
    i = strcmp(string1, "Jerry");
    j = strcmp(string1, string2);
    k = strcmp(string1, "Leroy");
    printf("%d%d%d\n", i,j,k);
}