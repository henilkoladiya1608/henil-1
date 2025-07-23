#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Num.txt", "r");

    int number;
    fscanf(fptr, "%d", &number);
    printf("Number is :%d \n", number);
    fscanf(fptr, "%d", &number);
    printf("Number is :%d \n", number);
    fscanf(fptr, "%d", &number);
    printf("Number is :%d \n", number);
   
    fclose(fptr);

    return 0;
}