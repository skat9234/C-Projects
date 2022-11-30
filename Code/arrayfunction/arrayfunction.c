#include <stdio.h>  

    void Display(int m);
    int main(void) {
        int i;
        int marks[] = {55,65,75,56,78,78,90};

        for (i=0; i<=6; i++) {
            Display(marks[i]);
        }
    }
    
    void Display(int m) {
        printf("%d\t", m);
    }