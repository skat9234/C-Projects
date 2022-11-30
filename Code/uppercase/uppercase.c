// //Write C Program using stdlib functions to make the starting character uppercase and all other lowercase
// #include<stdio.h>
 
// void upper_case(char*);
// void lower_case(char*);
 
// int main(void) {
//    char words[100];
 
//    printf("Enter a string to convert it into upper case\n");
//    gets(words);
//    upper_case(words);
//    printf("Entered string in upper case is %s \n", words);
//    lower_case(words);
//    printf("The string in lower case is %s \n", words);
// }
 
// void upper_case(char *string)
// {
//    while(*string)
//    {
//        if ( *string >= 'a' && *string <= 'z' )
//        {
//           *string = *string - 32;
//        }
//        string++;
//    }
// }

// void lower_case(char *string)
// {
//    while(*string)
//    {
//        if ( *string >= 'A' && *string <= 'Z' )
//        {
//           *string = *string + 32;
//        }
//        string++;
//    }
// }
#include <stdio.h>
#include <string.h>
#include <ctype.h>


    void change(char c[]) {
        int i;
        c[0] = toupper(c[0]);
        for (i=0; i<strlen(c) - 1; i++) {
            if (c[i] == " ") {
                c[i+1] = toupper(c[i+1]);
            }
            else {
                c[i+1] = tolower(c[i+1]);
            }
            
        }
        printf("%s", c);
    }


int main(void) {
    char a[] = "hELLO tHERE";
    change(a);
}

// Arrays and FUnctions
// Array Definition and declaration of 1d arrays
// Funftions
//Function Definition and Declaration
// Local and Global Var
// Parameter passing called by value
// Passing Array Elemets to a function
// Passing Entire Arrays to a Function
// Standard LibraryString Functions
// strlen() | strcpy() | strcmp | strcap()
// Math
// log, log10, pow(), sqrt(), sin(), cos(), tan()
// Char Functions
// isdigit isAlpha, islower, isalnum, toupper, tolower