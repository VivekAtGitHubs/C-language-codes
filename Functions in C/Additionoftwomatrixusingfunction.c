#include <stdio.h>

// Function prototype to add matrices
void addmat(int [][10], int [][10], int, int);

int main() {
    int a[10][10], b[10][10], row, col, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &row, &col);  // fixed variable name

    // Input for first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);  // fixed
        }
    }

    // Input for second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);  // fixed
        }
    }

    // Function call to add matrices
    addmat(a, b, row, col);

    return 0;
}

// Function to add two matrices and print the result
void addmat(int a[][10], int b[][10], int row, int col) {
    int c[10][10], i, j;

    // Perform addition
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result
    printf("Resultant Matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
