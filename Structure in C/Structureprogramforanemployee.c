#include <stdio.h>
struct employee {
    int emp_code;
    char emp_name[50];
    char design[50];
    float salary;
};
int main()
{
    struct employee a;
    printf("\nEnter employee code: ");
    scanf("%d", &a.emp_code);
    printf("Enter employee name: ");
    scanf(" %[^\n]%*c", a.emp_name); 
    printf("Enter designation: ");
    scanf(" %[^\n]%*c", a.design);
    printf("Enter salary: ");
    scanf("%f", &a.salary);
    printf("\nCode = %d", a.emp_code);
    printf("\nName = %s", a.emp_name);
    printf("\nDesignation = %s", a.design);
    printf("\nSalary = %.2f\n", a.salary);
    return 0;
}
