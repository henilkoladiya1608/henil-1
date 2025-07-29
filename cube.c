#include<stdio.h>

int main(){

    int n;
    int cube  = 0;
    printf("Enter number :");
    scanf("%d", &n);
    cube = n*n*n;
    printf("Cube of this number is:%d", cube);
    return 0;
}