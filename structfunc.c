
#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void structInfo(struct student s1);

int main()
{

    struct student s1 = {1664, 9.2535, "Henil"};
    structInfo(s1);
    return 0;
}

void structInfo(struct student s1)
{
    printf("Student information :\n");
    printf("Student roll number is :%d \n", s1.roll);
    printf("Student cgpa is:%f \n", s1.cgpa);
    printf("Student name is:%s \n", s1.name);
}