#include <stdio.h>

int main() {
    char ch;          //use char variable instead of using int otherwise the program not work 
    printf("Enter the character: ");
    scanf("%c", &ch);
    if (ch >='A' && ch <='Z')      
    {
        printf("Upper case");
    }
    else if (ch >='a' && ch <='z')
    {
        printf("Lower case");
    }
    else{
        printf("Not a english character");
    }
    return 0;
}