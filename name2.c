#include <stdio.h>

int main()
{
    // char fname[50];
    // char mname[50];
    // char lname[50];

    // printf("enter your first name :");
    // scanf("%s", fname);
    
    // printf("enter your middle name :");
    // scanf("%s", mname);
    // printf("enter your last name :");
    // scanf("%s", lname);

    // printf("Your full name is :%s",fname,mname,lname);

    char str[100];
    printf("Enter your full name :");
    fgets(str,100,stdin);
    puts(str);
    return 0;
}