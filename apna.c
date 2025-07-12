#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = 23;
    int *_ptr = &_age;

    printf("%u, %u diffrence is :%u\n", ptr,_ptr , ptr-_ptr);
_ptr = &age;
    printf("%u, %u comparison is :%u \n",ptr == _ptr);
    return 0;
}