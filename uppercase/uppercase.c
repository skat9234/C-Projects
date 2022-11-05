//Write C Program using stdlib functions to make the starting character uppercase
#include<stdio.h>
 
void upper_case(char*);
 
int main(void) {
   char words[100];
 
   printf("Enter a string to convert it into upper case\n");
   gets(words);
   upper_case(words);
   printf("Entered string in upper case is \"%s\"\n", words);
}
 
void upper_case(char *string)
{
   while(*string)
   {
       if ( *string >= 'a' && *string <= 'z' )
       {
          *string = *string - 32;
       }
       string++;
   }
}