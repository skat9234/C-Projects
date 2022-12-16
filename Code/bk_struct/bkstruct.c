#include <stdio.h>

int main(void) {
    struct book {
        char name;
        float price;
        int pages;
    };
    struct book b1 = {'B', 130.00, 5503};
    printf("Address of name = %u\n" , &b1.name);
    printf("Address of price = %u\n" , &b1.price);
    printf("Address of pages = %u\n" , &b1.pages);
}