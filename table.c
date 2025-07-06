#include <stdio.h>

int main()
{
    int n;
    int multi;
    printf("Enter the number :");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        multi = n * i;
        printf("%d \n", multi);
    }

    return 0;
}