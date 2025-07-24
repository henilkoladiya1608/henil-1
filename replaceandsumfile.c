#include<stdio.h>

int main() {

    FILE *fptr;
    int a,b;
    fptr = fopen("a & b.txt", "r");
   
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fopen("a & b.txt", "w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);
    return 0;

}