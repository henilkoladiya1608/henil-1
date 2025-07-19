#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student ece[100];
    ece[0].roll = 1664;
    ece[0].cgpa = 1.23;
    strcpy(ece[0].name, "henil");

    printf("Student name is :%s \n", ece[0].name);
    printf("Student cgpa is :%f \n", ece[0].cgpa);
    printf("Student roll number is :%d \n", ece[0].roll);

    return 0;
}
