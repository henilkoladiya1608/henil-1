#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Student info.txt", "w");

    int age;
    char name[100];
    float cgpa;

    printf("enter name :");
    scanf("%s", name);
    printf("enter age :");
    scanf("%d", &age);
    printf("enter cgpa :");
    scanf("%f", &cgpa);

    
    fprintf(fptr , "student name :%s \n", name);
    fprintf(fptr , "student age :%d \n", &age);
    fprintf(fptr , "student cgpa :%f \n", &cgpa);

    fclose(fptr);

    return 0;
}

