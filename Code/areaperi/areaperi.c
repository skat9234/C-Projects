// write a C program using call by reference defining a function areaperi() which takes an integer value and two float pointers
// The integer value is the radius of the circle, one of the float pointers is for are and the other one is for perimeter.

#include<stdio.h>  
  
void area_peri(int, float*, float*);  
  
int main()  
{  
    int radius;
    float area, perimeter;  
  
    printf("Enter radius of Circle: ");  
    scanf("%d", &radius);  
  
    area_peri(radius, &area, &perimeter);  
  
    printf("\nArea of Circle = %0.2f\n", area);  
    printf("Perimeter of Circle = %0.2f\n", perimeter);  
  
    return 0;  
}  
  
void area_peri(int r, float *a, float *p)  
{  
    *a = 3.14 * r * r;  
    *p = 2 * 3.14 * r;  
} 
