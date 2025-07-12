#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    printf("Ptr is : %u \n", ptr);
    ptr++; // increment of datatype's byte.

    printf("Ptr is : %u \n", ptr);
    ptr--; // decrement of datatype's byte.
    printf("Ptr is : %u \n", ptr);
    return 0;
}