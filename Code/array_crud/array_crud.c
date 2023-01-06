#include <stdio.h>

int main(void) {
    int a[100], i, loc, element, num, choice, j , n;
    printf("Enter the total number of elements: ");
    scanf("%d", &num);
    printf("Enter the elements: ");
    for (i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }
    do {
        printf("\n 1. Insertion \n 2. Deletion \n 3. Search \n 4. Display \n 5. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the location where you wish to insert an element: ");
                scanf("%d", &loc);
                printf("Enter the element to be inserted: ");
                scanf("%d", &element);
                
                for (i = num - 1; i >= loc; i--) {
                    a[i + 1] = a[i];
                }
                a[loc] = element;
                num++;
                break;
            case 2:
                printf("Enter the location where you wish to delete an element: ");
                scanf("%d", &loc);
                if (loc >= num + 1) {
                    printf("Deletion not possible");
                } else {
                    for (i = loc; i < num - 1; i++) {
                        a[i] = a[i + 1];
                    }
                    num--;
                }
                break;
            case 3:
                printf("Enter the element to be searched: ");
                scanf("%d", &element);
                for (i = 0; i < num; i++) {
                    if (a[i] == element) {
                        printf("Element found at location %d", i + 1);
                        break;
                    }
                }
                if (i == num) {
                    printf("Element not found");
                }
                break;
            case 4:
                printf("The elements in the array are: ");
                for (i = 0; i < num; i++) {
                    printf("%d ", a[i]);
                }
                break;
            case 5:
                printf("Exiting");
                break;
            default:
                printf("Invalid choice");
        }
    }
    while (choice != 5);
    }