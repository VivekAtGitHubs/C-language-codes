#include <stdio.h>

int main() {
    int i,n;
    printf("enter number");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("\n%d",i);
        i=i+1;
    }
    while(i<=n);
    return 0;
}