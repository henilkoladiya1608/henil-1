#include <stdio.h>
#include<string.h>
int main()
{
    char oldStr [ ] = "henil";
    char newStr[] = "koladiya";

    strcpy(newStr, oldStr);     //change string value 
    
    puts(newStr);
    return 0;
}