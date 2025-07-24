#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("readfilenumber.txt", "r");
    int n ;
    fscanf(fptr, "%d" , &n);
    printf("Number is :%d \n", n);
    fscanf(fptr, "%d" , &n);
    printf("Number is :%d \n", n);
    fscanf(fptr, "%d" , &n);
    printf("Number is :%d \n", n);
    fscanf(fptr, "%d" , &n);
    printf("Number is :%d \n", n);
    fscanf(fptr, "%d" , &n);
    printf("Number is :%d \n",n);
    fscanf(fptr, "%d" , &n);
    printf("Number is :%d \n", n);
  

   
    fclose(fptr);
    return 0;
}