// persantage of three subjects marks !


#include <stdio.h>

int calcPersentage(int science, int math, int gujarati);
int main()
{
    int sc, mat, guj;
    printf("Enter the marks in Science : ");
    scanf("%d", &sc);
    printf("Enter the marks in Mathematics : ");
    scanf("%d", &mat);
    printf("Enter the marks in Gujarati : ");
    scanf("%d", &guj);

    printf("The persentage is :%d", calcPersentage(sc, mat, guj));
    return 0;
}

int calcPersentage(int science, int math, int gujarati)
{

    return ((science + math + gujarati) / 3);
}
