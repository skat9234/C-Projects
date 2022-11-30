#include <stdio.h>

int main(void) {
    float eng, hin, fre, sst, sci, math;

    printf("Enter English Marks (Out of 100): ");
    scanf("%f", &eng);
    printf("Enter Hindi Marks (Out of 100): ");
    scanf("%f", &hin);
    printf("Enter French Marks (Out of 100): ");
    scanf("%f", &fre);
    printf("Enter Social Science Marks (Out of 100): ");
    scanf("%f", &sst);
    printf("Enter Science Marks (Out of 100): ");
    scanf("%f", &sci);
    printf("Enter Maths Marks (Out of 100): ");
    scanf("%f", &math);
    

    float total = ((eng + hin + fre + sst + sci + math) / 600) * 100;
    int grade  = (int)total;


    if (grade >= 90) {
        printf("You got GRADE A! \n");
    } 
    else if (grade >= 70 && grade <= 89) {
        printf("You got GRADE B \n");
    }
    else if (grade >= 50 && grade <= 69) {
        printf("You got GRADE C \n"); 
    }
    else if (grade >= 30 && grade <= 49) {
        printf("You got GRADE D \n");
    }
    else if (grade < 30) {
        printf("You Failed! \n");
    }
    
    printf("%i", grade);

}                                                                                           