#include <stdio.h>
#include <string.h>

int main(void) {
    char source[] = "Sayonara", target[20];
    strcpy(target,source);
    printf("Source string = %s\n", source);
    printf("target string = %s\n", target);
}