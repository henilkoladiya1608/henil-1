#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));
    printf("Enter 5 numbers :");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d ", &ptr[i]);
    }

   
    for (int i = 0; i < 5; i++)
    {
        printf("Number %d is %d \n", i, ptr[i]);
    }

    return 0;
}
