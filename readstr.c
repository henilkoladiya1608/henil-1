#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char buffer[100];

    fptr = fopen("String.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), fptr))
    {
        printf("Read string: %s", buffer);
    }

    fclose(fptr);

    return 0;
}