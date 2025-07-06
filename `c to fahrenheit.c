#include<stdio.h>
//the conversation program : degree C to fahrenheit. 

int main() {
  float c,f;
  printf("enter the value of `c : ");
  scanf("%f" , &c);

  f = 9*c/5 + 32;
  printf("the value in fahrenheit is : %f", f);
  
    return 0;
}
