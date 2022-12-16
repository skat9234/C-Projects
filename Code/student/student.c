// Write a C Program to create a structure student with the variables name, rollno, class. Read the values of the variables and print the values of the variables.
// Define another structure result which has the structure student as a member. and also an aditional variable grade of type character.
// Read the values of the variables and print the values of the variables.
#include <stdio.h>

int main(void) {
    struct student {
        char name[25];
        int rollno;
        int class;
    };
    struct result {
        struct student s;
        char grade;
    };
    struct result r1;
    printf("Enter name: ");
    scanf("%s", r1.s.name);
    printf("Enter rollno: ");
    scanf("%d", &r1.s.rollno);
    printf("Enter class: ");
    scanf("%d", &r1.s.class);
    printf("Enter grade: ");
    scanf(" %c", &r1.grade);
    printf("\n\n");
    printf("Name = %s\n", r1.s.name);
    printf("Rollno = %d\n", r1.s.rollno);
    printf("Class = %d\n", r1.s.class);
    printf("Grade = %c\n", r1.grade);
}