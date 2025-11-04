#include <stdio.h>
int main() {
int i=1,j,b;
while(i<=5)
{
    b=1;
    while(b<=5-i)
    {
        printf("__ ");
        b++;
    }
    j=1;
    while(j<=2*i-1)
    {
        printf("*");
        j++;
    }
printf("\n");
i++;
}
    return 0;
}