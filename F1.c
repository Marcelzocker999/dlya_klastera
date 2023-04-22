#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 3

void add_matrices(int a[][COLS], int b[][COLS], int c[][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int a[ROWS][COLS], b[ROWS][COLS], c[ROWS][COLS];
    int i, j, k;

    // initialize matrices a and b with random values
    srand(time(NULL));
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            a[i][j] = rand() % 10;
            b[i][j] = rand() % 10;
        }
    }

    // add matrices 10,000 times
    for (k = 0; k < 10000; k++) {
        add_matrices(a, b, c);
    }

    // print the final matrix c
    printf("Matrix C:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
