#include <stdio.h>
struct employee
{
    int code;
    char name[50];
    float salary;
};

int main()
{
    struct employee a[10];
    int i, key, flag = 0, pos;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter code: ");
        scanf("%d", &a[i].code);

        printf("Enter name: ");
        scanf(" %[^\n]%*c", a[i].name);  // Reads full name with spaces

        printf("Enter salary: ");
        scanf("%f", &a[i].salary);
    }

    printf("\nEnter employee code to search: ");
    scanf("%d", &key);

    for(i = 0; i < 10; i++)
    {
        if(a[i].code == key)
        {
            flag = 1;
            pos = i;
            break;
        }
    }

    if(flag == 1)
    {
        printf("\nCode = %d", a[pos].code);
        printf("\nName = %s", a[pos].name);
        printf("\nSalary = %.2f\n", a[pos].salary);
    }
    else
    {
        printf("\nSearch value not found\n");
    }

    return 0;
}
