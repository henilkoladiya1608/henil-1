#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("readfile.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    printf("\n");
    fclose(fptr);
    return 0;
}