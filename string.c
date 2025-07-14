#include <stdio.h>

void stringName(char arr[]);
int main()
{
    char firstname[] = "koladiya";
    char lastname[] = " henil";
    
    stringName(firstname);
    stringName(lastname);
    return 0;
}
void stringName(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}