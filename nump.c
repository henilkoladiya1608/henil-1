#include <stdio.h>

// program : odd numbers between to numbers 
int main() {
  /*  for (int i = 5; i <=50; i++)
    {
      if (i%2 != 0)
      {
     printf("The odd number is :",i);
        printf("%d \n", i);

      }
     
    }
    printf("Thank You !");
    return 0;
}*/

for (int i = 5; i <= 50; i++)
{
   if (i%2 == 0)
   {
  
   continue;
   }
    printf("%d \n", i);
}
return 0;
}