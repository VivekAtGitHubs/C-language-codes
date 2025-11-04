#include <stdio.h>

int main()
{
    int n, *p, i, count = 0;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &n);

    p = &n;

    for(i = 1; i <= *p; i++)
    {
        if(*p % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    return 0;
}