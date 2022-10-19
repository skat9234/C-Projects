#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,root1,root2,D;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\nHello, Welcome to the quadriatic equation solver by Aryan the G\n\n\n");

    printf("\nEnter the value of a in the quadratic equation\n");
    scanf("%f",&a);

     printf("\nEnter the value of b in the quadratic equation\n");
    scanf("%f",&b);

      printf("\nEnter the value of c in the quadratic equation\n");
    scanf("%f",&c);

    D=((b*b)-(4*a*c));

if(D>=0){
    root1= ((-b+sqrt(D))/2*a);
    root2 = ((-b-sqrt(D))/2*a);

    printf("the first root is \n%f\n\n",root1);
      printf("\nthe second root is \n%f\n\n\n\n\n\n",root2);
}
else{
 printf("The roots are imaginary, go find em' in your dreams");
}
      return 0;

}