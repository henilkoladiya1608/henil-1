#include <stdio.h>
#include <string.h>

typedef struct squidgame
{
  int accountnumber;
  char name[100];

} acc;

int main()
{
  acc acc1 = {111, "henil"};
  acc acc2 = {456, "vraj"};
  acc acc3 = {222, "dharmisthaben"};

  printf("account number :%d \n", acc1.accountnumber);
  printf("name is :%s  \n", acc1.name);

  printf("account number :%d \n", acc2.accountnumber);
  printf("name is :%s \n", acc2.name);

  printf("account number :%d \n", acc3.accountnumber);
  printf("name is :%s \n", acc3.name);

  return 0;

  return 0;
}
