#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Newtext.txt", "a");

    fprintf(fptr, "%c" , 'a');
    fprintf(fptr, "%c" , 'p');
    fprintf(fptr, "%c" , 'p');
    fprintf(fptr, "%c" , 'l');
    fprintf(fptr, "%c" , 'e');
    fclose(fptr);

    return 0;
}