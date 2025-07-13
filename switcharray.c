#include <stdio.h>

void switchArray(int arr[], int n);
void printArray(int arr[ ], int n);

int main()
{
    int array[] = {1,2,3,4,5,6};
    switchArray(array, 6);
    printArray(array , 6);

    return 0;
}

void switchArray(int arr[], int n){
    for (int  i = 0; i < n; i++)
    {
       
      int first = arr[i];
      int second = arr[n-i-1];
      arr[i] = first;
      arr[n-i-1] = second;

    }
   
    
}
void printArray(int arr[ ], int n){
    for (int  i = 0; i < n; i++)
    {
       printf("%d \t", arr[i]);

    }

} 
