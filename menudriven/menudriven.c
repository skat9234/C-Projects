// Write a Menu-driven program which has the following options: 1) Factorial of a number  2) prime of not  3) odd or even   4) exit
// Selected, the appropriate action should be executed and once the action is finished the menu must re-appear unless the user selects
// the exit option, the program should continue to work

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int choice, i, num, fact;
    
    
    while (1) 
    {
    printf("Enter a Number: \n");
    printf("1) Factorial of a number \n");
    printf("2) Prime of Not \n");
    printf("3) ODD or EVEN \n");
    printf("4) Exit \n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: 
        printf("Enter Number: ");
        scanf("%d", &num);
        fact = 1;
        for(i=1; i<=num; i++) {
            fact = fact*i;
        }
        printf("Factorial Value = %d \n", fact);
        break;

        case 2:
                printf("Enter Number: ");
                scanf("%d", &num);
                for(i=2; i<num; i++) {
                    if(num%i==0) {
                        printf("Not Prime");
                        break;
                    }
                    if(i==num) {
                        printf("prime \n");
                        break;
                    }
                }
        case 3: 
                printf("\n Enter Number: ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    printf("\n Even \n");
                }
                else {
                    printf("\n Odd\n");
                }
                break;
        case 4:
                exit(0);
    default:
        printf("Wrong Choice");
        break;
    }
    }
    

}