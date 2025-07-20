#include<stdio.h>
#include<string.h>

struct  student
{
  int roll;
  float cgpa;
  char name[100];

};
int main(){
     
    struct student s1 = {1664, 9.2535 , "Henil"};
    
    printf("Student cgpa is :%f \n", s1.cgpa);
    strcpy(s1.name , "henil");
    printf("Student name is :%s \n", s1.name);
    printf("Student roll number is :%d \n", s1.roll);

    struct student *ptr =&s1;
printf("Student roll number is :%d \n", (*ptr).roll);
    return 0;
}
