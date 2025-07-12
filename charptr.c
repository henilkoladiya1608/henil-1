#include <stdio.h>

int main()
{
    char star = 'a';
    char *ptr = &star;
    printf("Ptr is : %u \n", ptr);
    ptr++; // increment of datatype's byte.

    printf("Ptr is : %u \n", ptr);
    ptr--; // decrement of datatype's byte.
    printf("Ptr is : %u \n", ptr);
    return 0;
}