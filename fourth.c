#include <stdio.h>

void calculatePrice(float value);
int main()
{
    float value;
    printf("Enter your product value :");
    scanf("%f", &value);
     printf("The orignal value is :%f \n", value);
    calculatePrice(value);
   
    return 0;
}
void calculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("the final prise is :%f\n", value);
}