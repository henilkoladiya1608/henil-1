
#include <stdio.h>
#include<string.h>
int main()
{
   char firststring[100] = "Henil ";
   char secondstring[ ]= "Koladiya";
   strcat(firststring, secondstring);
    puts(firststring);
    return 0;
}