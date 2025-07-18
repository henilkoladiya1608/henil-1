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
    //first student
    struct student s1;
    s1.roll = 1235;
    s1.cgpa = 9.3256569;
    strcpy(s1.name, "henil");
    printf("First student information :\n");
    printf("Student name is :%s \n", s1.name);
    printf("Student roll no is : %d \n", s1.roll);
    printf("Student CGPA is :%f \n", s1.cgpa);

    //second student
    struct student s2;
    s2.roll = 1236;
    s2.cgpa = 10.0000000;
    strcpy(s2.name, "vraj");
    printf("Second student information :\n");
    printf("Student name is :%s \n", s2.name);
    printf("Student roll no is : %d \n", s2.roll);
    printf("Student CGPA is :%f \n", s2.cgpa);

    //third student 
    struct student s3;
    s1.roll = 1237;
    s1.cgpa = 7.2564585;
    strcpy(s3.name, "kuku");
    printf("Third student information :\n");
    printf("Student name is :%s \n", s3.name);
    printf("Student roll no is : %d \n", s3.roll);
    printf("Student CGPA is :%f \n", s3.cgpa);

    return 0;
}
