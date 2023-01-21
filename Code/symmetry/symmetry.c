// Write a C Program to find the transpose and check if the matrix is symmetric or not
 #include <stdio.h>

int main(void) {
    int i,j, rows, columns, a[10][10], t[10][10], count=1;
    printf("\n Enter the no. of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    printf("\n Enter the elements: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            t[j][i] = a[i][j];
        }
    }
    printf("\n The transpose of the matrix is: \n");
    for (i=0; i<columns; i++) {
        for (j=0; j<rows; j++) {
            printf("%d", t[i][j]);
        }
        printf("/n");
    }
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            if (a[i][j] != t[i][j]) {
                count = 0;
                break;
            }
        }
    }
    if (count == 1) {
        printf("\n The matrix is symmetric \n");
    }
    else {
        printf("\n The matrix is not symmetric \n");
    }
    
}