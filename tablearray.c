#include <stdio.h>

void storeTable(int arr[][10] , int n, int m , int number);

int main()
{
    int table[2][10];
    storeTable(table, 0,10,2);
    
    storeTable(table, 1,10,3);
    printf("teble of first number :");
    for (int i = 0; i < 10; i++)
    {
       printf("%d \t \n", table[0][i]);
    }
    printf("table of second number :");
    for (int i = 0; i < 10; i++)
    {
       printf("%d \t \n", table[1][i]);
    }
    

    return 0;
}

void storeTable(int arr[][10] , int n, int m , int number){
    for (int i = 0; i <m; i++)
    {
       arr[n][i] = number * (i +1);
    }
    
}