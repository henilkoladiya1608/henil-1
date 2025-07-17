#include <stdio.h>
#include<string.h>

void slice(char str[], int n, int m );
int main()
{
    char str[] = "henilkoladiya";

        slice(str,0,4);

    return 0;
}

void slice(char str[], int n,  int m){

    char newString[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
       newString[j] = str[i];
    }
    newString[j] = '\0';
    puts(newString);

}