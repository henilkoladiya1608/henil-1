#include<stdio.h>

int main(){

    FILE *fptr;
    fptr  = fopen("Odd number.txt", "w");
    int num;
    printf("Enter number :");
    scanf("%d" , &num);
    for (int i = 1; i <=num ; i++)
    {
       if (i % 2 != 0)
       {
        fprintf(fptr, "Odd number :%d \n", i);

       }
       
    }
    fclose(fptr);
    return 0;
}

