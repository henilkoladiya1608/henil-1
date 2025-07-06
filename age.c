//if, else, else if statement varifing program.

#include<stdio.h>
int main(){
  int age;
  printf("Enter your age : ");
  scanf("%d", &age);
 
  if (age>=18)
  {
    printf("You are adult \n");
    printf("You can drive \n");
    printf("You can vote \n");
  }
  else if(age>13 && age<18){
  printf("You are teenager \n");
  }
  else {
    printf("You are not adult \n");
  }
  printf("Thank You");
    return 0;
}

/*"Jyare if ane else maa curly brackate no use no karvo hoy tyare bane maa single statement hovu
joyi to aaram thi koi error vagar tame compile kari shako cho ane valid output melvi shakay
che...."*/