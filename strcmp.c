
#include <stdio.h>
#include<string.h>
int main()
{
   char firststring[ ] = "Henil";
   char secondstring[ ]= "Koladiya";
  printf("%d",strcmp(firststring, secondstring));
    //if firststring > second string output = -1
    //if firststring < second string output = 1
    return 0;
}