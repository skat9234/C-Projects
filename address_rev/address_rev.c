#include <stdio.h>

intmain(void) {
    int i = 3;
    int *j;
    j= &i;

    printf('Address Of i = %u\n', &i);
    printf('Address Of i = %u\n', j);
    printf('Address Of j = %u\n', &j);
    printf('Address Of j = %u\n', j);
    printf('Value Of i = %d\n', i);
    printf('Value Of i = %d\n', *(&i));
    printf('Value Of i = %d\n', *j);
    
}

