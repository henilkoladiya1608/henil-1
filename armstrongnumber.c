// Search for : The number is an armstrong number or not !

#include <stdio.h>

int main()
{
    int n, r;
    int sum = 0;
    int cube;

    printf("Enter the number :");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        cube = r * r * r;
        sum = sum + cube;
        n = n / 10;
    }
    if (n == sum)
    {
        printf("This is armstrongnumber ", &n);
    }
    else
    {
        printf("This is not an armstrongnumber", &n);
    }
}