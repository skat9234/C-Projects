// Write a menu-driven program with the following options: 
// 1) Addition
// 2) Find the square of a number
// 3) Cube of a number
// 4) To perform decimal to binary conversion   

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main() {
    int choice, add1, add2, sum, sq, num, cub;

    while (1) 
    {
    printf("Enter a Number: \n");
    printf("1) Addition \n");
    printf("2) Square of a number \n");
    printf("3) Cube of a Number \n");
    printf("4) Decimal to Binary Conversion \n");
    printf("5) Exit \n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf('Enter the first number: ');
        scanf('%d', &add1);
        printf('Enter the Second Number: ');
        scanf('%d', &add2);
        sum = add1+add2;
        printf("The sum is: %d", sum);
        break;
    case 2: 
        printf('Enter the number to be squared: ');
        scanf("%d", &num);
        sq = num*num;
        printf("The square is: %d", sq);
    case 3:
        printf('Enter the number to be cubed: ');
        scanf("%d", &num);
        cub = num*num*num;
        printf("The Cube of the number is: %d", num)
    case 4: 
        exit(0);
    default:
        printf('Wrong Choice');
        break;
    }
    }
}