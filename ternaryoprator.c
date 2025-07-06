#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    age >= 18 ? printf("adult \n") /*not use the semicolon*/ : printf("not adult \n"); /*here us the semicolon*/
    return 0;
}

/*here noticable thing is this that when you
use condition 1 in ternary oprator the semicolon
is not used because of the statement is not end in condition 1 */