#include<stdio.h>

int main(){
    int n;
    printf("Enter the character :");
    scanf("%c", &n);
    printf("%c", n>=0 && n<=9);
    return 0;
}