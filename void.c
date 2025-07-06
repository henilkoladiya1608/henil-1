#include <stdio.h>
// declaration/prototype
void printHello();
void Goodbye();
int main()
{
    printHello(); // function call
    Goodbye();
    return 0;
}

// function defination
void printHello()
{
    printf("Hello! \n");
}

void Goodbye()
{
    printf("good bye ! \n");
}