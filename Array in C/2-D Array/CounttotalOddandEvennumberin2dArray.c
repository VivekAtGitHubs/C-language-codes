#include <stdio.h>
int main()
{
    int a[3][3],i ,j,even,odd;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\nenter value for 2d array");
        scanf("%d",&a[i][j]);
    }
    printf("\n 2d array elements are");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d",a[i][j]);
    }
    even=odd=0;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(a[i][j]%2==0)
        even++;
        else
        odd++;
    }
    printf("\ntotal even=%d and total odd=%d",even,odd);
    return 0;
}