#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    if (number >= 0)
    {
        printf("The number is positive \n");
        if (number % 2 == 0)
        {
            printf("The number is even \n");
        }
        else
        {
            printf("The number is Odd \n");
        }
    }
    else
    {
        printf("The number is negative");
    }
}