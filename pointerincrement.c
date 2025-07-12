#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    printf("Ptr is : %u", ptr);
    ptr++; // increment of datatype's byte.

    printf("Ptr is : %u", ptr);
    return 0;
}