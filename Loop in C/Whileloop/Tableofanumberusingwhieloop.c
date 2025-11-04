#include <stdio.h>

int main() {
    int n, i = 1;
    printf("\nEnter number: ");
    scanf("%d", &n);  // Pass the address of n

    while (i <= 10) {
        printf("\n%d", n * i);
        i = i + 1;
    }
    return 0;
}
