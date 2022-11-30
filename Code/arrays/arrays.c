#include <stdio.h>

int main(void) {
    int avg, sum = 0;
    int i;
    int marks[10];
    for (i=0;i<=9; i++) {
        printf("Enter Marks: ");
        scanf("%d", &marks);
    }
    for (i=0; i<=9; i++) {
        sum += marks[i];
    }
    avg = sum/10;
    printf('Average Marks = %d', avg);

}