//To Find the sum of each row and column in a matrix

// Write a C Program to find the sum of each row

#include <stdio.h>

int main(void) {
    int m,n,i,j;
    printf("\n Enter the no. of Rows and Columns: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("\n Enter the Elements of the matrix \n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%d", arr[i][j]);
        }
        printf("/n");
    }
    printf("\n Row Sum... \n");
    for (i=0; i<m; i++) {
        int rsum = 0;
        for (j=0; j<n; j++) {
            rsum = rsum + arr[i][j];
        }
        printf("\n sum of Row %d is %d \n", i, rsum);
    }
    printf("\n Col Sum... \n");
    for (i=0; i<m; i++) {
        int rsum = 0;
        for (j=0; j<m; j++) {
            rsum = rsum + arr[j][i];
        }
        printf("\n sum of Columns %d is %d \n", i, rsum);
    }
}