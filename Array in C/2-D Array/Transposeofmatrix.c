#include <stdio.h>

int main() {
    int a[3][3], i, j;
    printf("\nEnter values for a 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nOriginal matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%4d", a[j][i]);  
        }
        printf("\n");
    }

    return 0;
}
