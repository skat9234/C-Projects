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

// So then, he told me to add more batches and he told me to give him
// Some time (a few classes) and its really nice thing you've built,
// Give me some time and I'll speak to you further on this
// then??
// He asked "How much time did it take you to build this?"
// I said "It took me 2 weeks to design and 4 weeks to develop,
// so 1 1/2 months in total"
// I thought of this a month back...
// I designed the look of the app and the logo in 2 weeks
// I gave it 30-35 min everyday (In the BUS!!) and CS class smtimes
// Instead of sleeping in the bus, I used to sleep at home and waste time
// Hutt u gonna be the one givin me a job!
// u're getting more mks than me in the aryaans tests!!!!!!!
// ull go to IIT 