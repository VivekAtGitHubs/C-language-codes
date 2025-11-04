#include <stdio.h>
int main() {
    int a[3][3], i, j, flag = 0;

    // Input
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter number for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Display Matrix
    printf("\nTwo-dimensional matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    // Check if Zero Matrix
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(a[i][j] != 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }

    if(flag == 1)
        printf("\nNot a zero (null) matrix.\n");
    else
        printf("\nZero matrix.\n");

    return 0;
}
