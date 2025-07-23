#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("NewText.txt", "w"); //this program make new file !
    if (fptr == NULL)
    {
       printf("File doesn't exist ");

    } else {
        printf("File exist");
        fclose(fptr);
    }
    
    
}