#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    s1.roll = 1235;
    s1.cgpa = 9.32565698;
    strcpy(s1.name, "henil");

    printf("Student name is :%s \n", s1.name);
    printf("Student roll no is : %d \n", s1.roll);
    printf("Student CGPA is :%f \n", s1.cgpa);

    return 0;
}
