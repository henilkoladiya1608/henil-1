// program to find square root !

#include <stdio.h>
#include <math.h>


float squareRoot(float a, float b);
int main()
{
  int  x;
    printf("Enter the number :");
    scanf("%f", &x);
    printf("The square root is :%f",x,squareRoot(x, 0.5));
    return 0;
}

float squareRoot(float a, float b)
{
   
    int n;
    n = pow(a, b);
    printf("The square root is :%f", n);

    return n;
}
