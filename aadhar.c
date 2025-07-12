#include <stdio.h>

int main()
{
    int aadhar[5];

    int*ptr = &aadhar[0];
    for (int  i = 0; i <5; i++)
    {
    printf(" index :", i);
    scanf("%d" , &aadhar[i]);

    }
    for (int i = 0; i < 5; i++)
    {
      printf("index = %d \n ", aadhar[i]);

    }
    
    return 0;
}