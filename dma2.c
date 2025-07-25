#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int sum = 0;
    ptr = (int *)malloc(5 * sizeof(int));
    printf("Enter product value \n");
    for (int i = 0; i == '!'; i++)
    {
        printf("Enter value :");
        scanf("%d", &ptr[i]);
        printf("Product value is :%d ", ptr[i]);
        printf("\n");
     
        sum = sum + ptr[i];
    }
    printf("Total bill is :", sum);

    return 0;
}