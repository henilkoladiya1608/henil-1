#include <stdio.h>

int digitSum(int n);
int main()
{
    digitSum(4);
   
  
    return 0;
}

int digitSum(int n){
    int sum =0;
    
    for (int  i = 0; i <= n; i++)
    {
       sum = sum + i;
    }
    printf("The sum is :%d", sum);
    return sum;
}
