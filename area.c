#include <stdio.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);
int main()
{
    float a = 5;
    float b= 10;
    printf("Area of rectangle is :%f\n", rectangleArea(a,b));

    float r = 10;
    printf("The area of circle is:%f\n ", circleArea(r));

    float x = 10;
    printf("The area of square is :%f\n", squareArea(x));
    return 0;
}
float squareArea(float side){
    return side*side;
}

float circleArea(float rad)
{
    return 3.14*rad*rad;
}

float rectangleArea(float a, float b){
    return a*b;

}