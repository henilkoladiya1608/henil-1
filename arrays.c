#include <stdio.h>

void arrayNumber(int arr[], int n);
int main()
{
    int array[6] = {10,20,30,40,50,60};
    arrayNumber(array, 6);
    return 0;
}
void arrayNumber(int arr[], int n){
for (int i = 0; i < n; i++)
{
    printf("%d \t", arr[i]);

}
printf("%d");
}