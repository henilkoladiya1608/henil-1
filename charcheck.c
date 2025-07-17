#include <stdio.h>
#include<string.h>

void checkCharacter(char str[], char ch);

int main()
{
    char str[] ="henil koladiya";
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);

    checkCharacter(str ,ch);
   
    return 0;
}

void checkCharacter(char str[], char ch){
    for (int i = 0;str[i] != '\0'; i++)
    {
       if (str[i] == ch)
       {
       printf("Yes ! character is present in your name ");
      return;
       }
       
    }
    printf("No ! this character is not available in your name ");
}