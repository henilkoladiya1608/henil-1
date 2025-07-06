// natural number or not

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("Your entered number is a natural number");
    }
    else
    {
        printf("Your entered number is not a natural number");
    }

    return 0;
}