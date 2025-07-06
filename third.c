// table of number with using the function !
#include <stdio.h>

void table(); //table name function
int main()
{
    int n;    //this is the int that user input
    printf("Enter the number :\n");
    scanf("%d", &n);

    table(n); // argument/actual perameter (user input int)
    return 0;
}
void table(int n)    //this int have no value but the argument give it value
{ // perameter/formal perameter 
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n",i * n);
    }
}