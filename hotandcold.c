// hot and cold temrature definding program !


#include <stdio.h>

int hotAndcold(int n);

int main()
{
    int Temp;
    printf("Enter the value of temprature :");
    scanf("%d", &Temp);
    hotAndcold(Temp);
    return 0;
}

int hotAndcold(int n)
{
    if (n > 30)
    {
        printf("The temprature is hot !");
    }
    else if (n < 10)
    {
        printf("The temprature is cold !");
    }
    else if (n >= 10 && n <= 30)
    {
        printf("The temprature is normal !");
    }
    return n;
}