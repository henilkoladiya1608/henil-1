//three number average output program

#include<stdio.h>

int main(){
 float x,y,z;
  printf("enter the value of first number :");
  scanf("%f", &x);
  printf("enter the value of second number :");
  scanf("%f", &y);
  printf("enter the value of third number :");
  scanf("%f", &z);
 

  printf("the average of these three number is :%f", (x+y+z)/3);
    return 0;
}