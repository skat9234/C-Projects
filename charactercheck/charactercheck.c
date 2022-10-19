#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character from the keyboard\n");
    scanf("%c",&ch);
    if(ch>65 && ch<=90){
        printf("\nCapital letter");
    }
    if(ch>=97&& ch<=122){
        printf("\nSmall case letter");
    }
    if(ch>=48 && ch<=57){
    printf("\nDigit");
    }
    if((ch>=0 && ch <=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127)){
     printf("\nspecial character");   
    }
    return 0;
}