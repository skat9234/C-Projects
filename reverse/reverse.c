#include <stdio.h>  
  
int main(void) {  
    // initializa
    int arr1[5], arr2[5],i,j;
    printf("Enter the elements of the array: \n");
    for (i=0; i<5; i++) {
        scanf("%d", &arr1[i]);
    }
    for (i=0, j=4; i<=4; i++, j--) {
        arr2[j] = arr1[i];
    }
    printf("Elements in reverse Order: \n");
    for (i=0; i<=4; i++) {
        printf("%d\t", arr2[i]);
    }
}  