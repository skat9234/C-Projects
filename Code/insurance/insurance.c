 // a company provides insurance to drivers based on following conditions   
//1)is married
//2)is unmarried, male and above 30 years
//3)is unmarried, female and above 25 years

#include<stdio.h>  
int main(){
    char gender,ms; // M for married adn U for unmarried, F for female and M fof male
    int age;
    printf("enter the age, gender, and marital status:");
    scanf("%d %c %c",&age,&gender,&ms);

    if((ms=='M')||(ms=='U' &&gender=='M'&&age>30)||(ms=='U'&&gender=='F'&&age>25)){
        printf("\ndriver is eligible for insurance");
    
    }
    else{
        printf("\nthe driver is not eligible");
    }
    return 0;

}