// program to find final cost with gst !
#include <stdio.h>

int main()
{
   float cost[3];
    printf("Enter the cost of 1st item :");
    scanf("%f", &cost[0]);
    printf("Enter the cost of 2nd item :");
    scanf("%f", &cost[1]);
    printf("Enter the cost of 3rd item :");
    scanf("%f", &cost[2]);

    float gst = (cost[0] + cost[0]*0.18) + (cost[1] + (cost[1]*0.18)) + (cost[2] + (cost[2]*0.18));
    printf("The final price is :%f", gst);

    return 0;
}