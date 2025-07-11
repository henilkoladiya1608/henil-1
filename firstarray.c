#include <stdio.h>

int main()
{

    int marks[3];
    printf("Enter the marks in physics :");
    scanf("%d", &marks[0]);
    printf("Enter the marks in chemistry :");
    scanf("%d", &marks[1]);
    printf("Enter the marks in maths :");
    scanf("%d", &marks[2]);

    printf("physics =%d\n chemistry = %d\n maths = %d\n ", marks[0], marks[1], marks[2]);

    return 0;
}