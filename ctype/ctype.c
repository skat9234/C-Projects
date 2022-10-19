#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    ch = getchar();
    ch = "B";
      if (islower(ch)){
        putchar(toupper(ch));\
      }
      else {
        putchar(tolower(ch));
      }

}