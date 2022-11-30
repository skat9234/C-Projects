#include <stdio.h>  
  
    void Italy(); // Function prototype
    void Brazil();
    void Argentina();
    int main(void) {
        printf("I'm in MAIN Function \n");
        Italy();
        Brazil();
        Argentina();
    }

    void Italy() {
        printf("I'm in ITALY \n");
    }
    void Brazil() {
        printf("I'm in BRAZIL \n");
    }
    void Argentina() {
        printf("I'm in ARGENTINA \n");
    }
    