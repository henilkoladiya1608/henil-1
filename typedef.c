#include <stdio.h>
#include <string.h>

typedef struct computerEngineeringStudent
{
    int roll;
    float cgpa;
    char name[100];

} cse;
int main()
{

    cse s1;
    strcpy(s1.name, "henil");
    s1.roll = 1625;
    s1.cgpa = 9.5689;

    printf("Student name is :%s \n", s1.name);
    printf("Student roll number is :%d \n", s1.roll);
    printf("Student cgpa is :%f \n", s1.cgpa);

    return 0;
}
