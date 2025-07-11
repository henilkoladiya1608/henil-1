#include<stdio.h>


int main(){
int a,b;
int *ptra;
int *ptrb;

printf("Enter the value of a :");
scanf("%d", &a);
printf("Enter the value of b :");
scanf("%d", &b);
ptra = &a;
ptrb = &b;
int sum = *ptra + *ptrb;
printf("The sum is :%d \n", sum);

    return 0;
}
 
