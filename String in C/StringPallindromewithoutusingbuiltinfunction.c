#include <stdio.h>
int main()
{
    char a[100];
    int i, length = 0, isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%s", a);
    while (a[length] != '\0')
    {
        length++;
    }
    for (i = 0; i < length / 2; i++) 
    {
        if (a[i] != a[length - i - 1]) 
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) 
    {
        printf("The string is a palindrome.\n");
    } else 
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}