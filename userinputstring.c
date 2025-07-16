#include <stdio.h>
#include<string.h>
int main()
{
 char name[100] ;

 printf("Enter your name :");
 scanf("%s", name);
 int lenght = strlen(name);
 printf("Lenght of your name is :%d",lenght);
    return 0;
}