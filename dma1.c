#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));

    printf("Enter 5 numbers \n");
    printf("Enter first number :");
    scanf("%d", &ptr[0]);
    printf("Enter second number :");
    scanf("%d", &ptr[1]);
    printf("Enter third number :");
    scanf("%d", &ptr[2]);
    printf("Enter fourth number :");
    scanf("%d", &ptr[3]);
    printf("Enter fifth number :");
    scanf("%d", &ptr[4]);
    for (int i = 0; i < 5; i++)
    {
        printf("Your choosing numbers is :");
        printf("%d \n", ptr[i]);
    }
    return 0;
}