/*the switch operator program with example of week's day*/

#include <stdio.h>

int main()
{

    int day; // mon-1 --- sun-7
    printf("Enter the day (1-7)");
    scanf("%d", &day);
    switch (day)

    {
    case 1:
        printf("The day is monday ");
        break;
    case 2:
        printf("The day is tuesday");
        break;
    case 3:
        printf("The day is wednesday");
        break;
    case 4:
        printf("The day is thuresday");
        break;
    case 5:
        printf("The day is friday");
        break;
    case 6:
        printf("The day is seturday");
        break;
    case 7:
        printf("The day is sunday");
        break;
    default:
        printf("Not a valid day !");
    }

    return 0;
}