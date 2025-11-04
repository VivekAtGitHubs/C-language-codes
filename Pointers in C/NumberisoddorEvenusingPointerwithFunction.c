#include <stdio.h>

void checkOddEven(int *);  // Function prototype

int main()
{
    int a, *p;

    printf("Enter a number to check: ");
    scanf("%d", &a);

    p = &a;
    checkOddEven(p);

    return 0;
}

// Function definition
void checkOddEven(int *p)
{
    if (*p % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}
