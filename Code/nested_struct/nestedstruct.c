#include <stdio.h>

int main(void) {
    struct address {
        char phone[15];
        char city[25];
        int pin;
    };
    struct emp {
        char name[25];
        struct address a;
    };
    struct emp e1 = {"Jeru", "25310546", "Nagpur", 10};
    printf("Name = %s Phone= %s", e1.name, e1.a.city);
    printf("City = %s Pin = %d", e1.a.city, e1.a.pin);
}