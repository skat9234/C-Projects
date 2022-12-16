#include <stdio.h>

int main(void) {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  do {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n = n/10;
  }
  while (n != 0);

  printf("Reversed number = %d", reverse);

}