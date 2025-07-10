#include <stdio.h>

int main() 
{
    int i = 7;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d", **pptr);
    return 0;
}