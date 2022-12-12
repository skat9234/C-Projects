// Write a C Program to calculate the Area Of A Sphere and Cone depending on user’s choice. 
#include <stdio.h>

AreaSphere(int rad);
AreaCone(int rad);

int main(void) {
    int rad;
    int choice;
    float pi = 3.14, areas, areac;

    printf("Choose: \n");
    printf("1. Sphere \n2. Cone");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You've Chosen Area of a Sphere \n");
            scanf("%d", &rad);
            AreaSphere(rad);
            break;
        case 2:
            printf("You've Chosen Area of a Cone \n");
            scanf("%d", &rad);
            AreaCone(rad);
            break;
    } 
}

// Calculate Area of a Sphere
int AreaSphere(int rad) {
    float pi = 3.14, areas;
    areas = 4 * pi * rad * rad;
    printf("The Area of the Sphere is: %f", areas);
}

// Calculate Area of a Cone
int AreaCone(int rad) {
    float pi = 3.14, areac;
    areac = pi * rad * rad;
    printf("The Area of the Cone is: %f", areac);
}