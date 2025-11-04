#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;

    printf("Enter values for first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Enter values for second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    printf("\nFirst matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    printf("\nSecond matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", b[i][j]);
        printf("\n");
    }

    // Matrix addition
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("\nAddition of the matrices is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", c[i][j]);
        printf("\n");
    }

    return 0;
}
