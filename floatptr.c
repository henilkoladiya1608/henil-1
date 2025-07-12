#include <stdio.h>

int main()
{
    float age = 22;
    float *ptr = &age;
    printf("Ptr is : %u \n", ptr);
    ptr++; // increment of datatype's byte.

    printf("Ptr is : %u \n", ptr);
    ptr--; // decrement of datatype's byte.
    printf("Ptr is : %u \n", ptr);
    return 0;
}