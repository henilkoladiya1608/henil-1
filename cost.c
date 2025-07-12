#include <stdio.h>

int main()
{

    int cost[3];
    printf("Enter the first product value :");
    scanf("%f ", &cost[0] );
    
    printf("Enter the second product value :");
    scanf("%f ", &cost[1] );
    printf("Enter the third product value :");
    scanf("%f ", &cost[2] );

    printf("Total price of first product is :%f",(cost[0]+ cost[0]*0.18) );
    printf("Total price of first product is :%f",(cost[1]+ cost[1]*0.18) );
    printf("Total price of first product is :%f",(cost[2]+ cost[2]*0.18) );




   


    return 0;
}