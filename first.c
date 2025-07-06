#include <stdio.h>

void india();
void french();

int main()
{
    char k;
    printf("Enter your i for indian and f for french :");
    scanf("%c", &k);
    if (k == 'i')
    {
        india();
    }
    else if (k == 'f')
    {
        french();
    }
    else
    {
        printf("Not valide nationality ! please try again.Thank You !");
    }

    return 0;
}

void india()
{
    printf("Namaste !");
}
void french()
{
    printf("Bonjour !");
}