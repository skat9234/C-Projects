// Write a C Program to display the number of days in a give month. 
#include <stdio.h>

int main(void) {
    int mo, days;

    printf("Enter Month: ");
    scanf("%d", &mo);

    switch (mo)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            days=31;
            break;
    case 4:
    case 6:
    case 9:
    case 11:
            days = 31;
            break;
    case 2: 
            days = 28;
            break;
    default:
        days=0;
        break;
    }
    
    if(days) {
        printf("Number of days in month %d are: %d", mo, days);
    }
    else {
        printf('Invalid Input!');
    }
}