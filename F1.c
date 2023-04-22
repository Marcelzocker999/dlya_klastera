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
    for (k = 0; k < 1000000000000; k++) {
        srand(time(NULL));
        for (i = 0; i < ROWS; i++) {
            for (j = 0; j < COLS; j++) {
                a[i][j] = rand() % 10;
                b[i][j] = rand() % 10;
            }
        }
        add_matrices(a, b, c);
    }
    return 0;
}
