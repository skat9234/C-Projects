// Write a C Program to Perform Insertion and Deletion of a Number in an array based on user's choice

#include <stdio.h>

int main()
{
	int i, x, position, n, y;
    int arr[10] = { 0 };

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &x);
    printf("Enter the position to be inserted: ");
    scanf("%d", &position);
    


	for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	    printf("\n");
	n++;
	for (i = n - 1; i >= position; i--)
		arr[i] = arr[i - 1];
	arr[position - 1] = x;

    

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

    printf("Enter the element to be deleted: ");
    scanf("%d", &position);

    if ( position >= n+1 )    
    printf("Deletion not possible.\n");
    
    else
    {    
        for ( i = position - 1 ; i < n - 1 ; i++ ) 
        arr[i] = arr[i+1];        
        
        printf("Resultant array is\n");
        
        for( i = 0 ; i < n - 1 ; i++ )        
        printf("%d ", arr[i]);        
    }    

    




}

