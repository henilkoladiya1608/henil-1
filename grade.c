/* The program to find grade in your result*/

#include <stdio.h>

int main()
{

    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);
    if (marks < 30)
    {
        printf("You got C grade");
    }
    else if (30 <= marks && marks < 70)
    {
        printf("You got B grade");
    }
    else if (70 <= marks && marks < 90)
    {
        printf("You got A grade");
    }
    else if (90 <= marks && marks <= 100)
    {
        printf("You got A+ grade");
    }
    else
    {
        printf("Your Enteered Marks is note valid please enter your valid marks");
    }

    return 0;
}