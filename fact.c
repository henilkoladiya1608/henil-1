#include <stdio.h>

int factorial(int n);
int main(){
int num;

printf("Enter the number :");
scanf("%d", &num);
int result = factorial(num);
printf("The factorial value is :%d",result);

    return 0;
}
int factorial(int n){
       int fact = 1;
    for (int i = 1; i <= n; i++)
    {
 
    fact = fact * i ;
    }
    return fact;
}


