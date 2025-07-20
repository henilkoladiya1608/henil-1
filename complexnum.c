#include <stdio.h>
#include <string.h>

struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex num1 = {5,11};
    struct complex *ptr = &num1;
    printf("real part is = %d \n", ptr -> real);
    printf("imag part is = %d \n", ptr -> img);

   
    return 0;
}