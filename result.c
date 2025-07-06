#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks :");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 30)

    {
        printf("You are failed ! ");
    }
    else if (marks <= 30 && marks <= 100)
    {
        printf("You are pass !");
    }
    else
    {
        printf("The marks is not valid please enter your valid marks \n");

        printf("Thank You ! \n");
    }
}