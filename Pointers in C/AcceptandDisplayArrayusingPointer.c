 #include <stdio.h>
int main()
{
    int a[10],i,*p;
    for(i=0;i<10;i++)
    {
        printf("\nenter number");
        scanf("%d",&a[i]);
    }
        p=&a[0];
        for(i=0;i<10;i++)
        {
            printf("\n%d",*(p+i));
            return 0;
        }
}