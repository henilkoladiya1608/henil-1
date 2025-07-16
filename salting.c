#include <stdio.h>
#include <string.h>

void salting(char password[100]);
int main()
{
    char password[100];
    printf("Enter your password :");
    scanf("%s", &password);
    salting(password);
    return 0;
}
void salting(char password[100])
{
    char salt[] = "1235";
    char newpassword[200];

    strcpy(newpassword, password);
    strcat(newpassword, salt);
    puts(newpassword);
}