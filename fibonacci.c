/*program for finding fibonacci series
note* : here when you try to find nth term 
then put the value of term in output is (n-1)
Thank You ! Enjoy the program. 
*/

#include <stdio.h>

int fib(int n);

int main()
{
    int num ;
    printf("enter value of terms to find in fibonacci series :");
    scanf("%d", &num);
    printf("%d", fib(num));
    return 0;
}
int fib(int n){
    if (n==0)
    {
       return 0;
    }
    if (n==1)
    {
       return 1;
    }
    
    
    int fibNm1 = fib(n-1);
    int fibNm2= fib(n-2);
    int fibN = fibNm1 + fibNm2;
   
    // printf("fibonacci %d is : %d \n", n, fibN);
 return fibN;
}


