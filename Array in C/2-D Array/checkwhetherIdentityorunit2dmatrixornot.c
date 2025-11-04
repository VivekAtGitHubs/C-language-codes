#include <stdio.h>

int main() {
    int a[3][3], i, j, flag = 1;

    // Input matrix
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display matrix
    printf("\nMatrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Check for identity matrix
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i == j && a[i][j] != 1) {
                flag = 0; // Diagonal element is not 1
                break;
            } else if(i != j && a[i][j] != 0) {
                flag = 0; // Non-diagonal element is not 0
                break;
            }
        }
        if(flag == 0) break;
    }

    // Output result
    if(flag == 1)
        printf("\nThe matrix is an Identity Matrix.\n");
    else
        printf("\nThe matrix is NOT an Identity Matrix.\n");

    return 0;
}
