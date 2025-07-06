#include <stdio.h>
// pending program for 3 or more int values note : this program not for find max value but it for min value

int main()
{

  int a, b;
  printf("enter the value of a : ");
  scanf("%d", &a);
  printf("enter the value of b : ");
  scanf("%d", &b);
  if (a < b)
  {
    printf("the min value is :%d", a);
  }
  else
  {
    printf("the min value is :%d", b);
  }

  return 0;
}
