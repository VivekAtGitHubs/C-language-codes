#include <stdio.h>

// Function prototype declaration
void search(int[], int, int);

int main() {
    int a[100], size, i, num;

    // Input array size
    printf("Enter size: ");
    scanf("%d", &size); // use &size, not size

    // Input array elements
    for (i = 0; i < size; i++) {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }

    // Input number to search
    printf("Enter number to search: ");
    scanf("%d", &num);

    // Call search function
    search(a, size, num);

    return 0;
}
// Function to search for a number in the array
void search(int a[], int size, int num) {
    int i, flag = 0, pos;

    for (i = 0; i < size; i++) {
        if (a[i] == num) {
            flag = 1;
            pos = i + 1;  // Position is 1-based
            break;
        }
    }

    if (flag == 1)
        printf("Number found at position %d\n", pos);
    else
        printf("Number not found\n");
}