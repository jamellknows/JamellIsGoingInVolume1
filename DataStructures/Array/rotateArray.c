#include <stdio.h>

void leftRotateByOne(int arr[], int size);

void leftRotate(int arr[], int times, int size)
{
    for(int i = 0 ; i < times; i++)
    {
        leftRotateByOne(arr, size);
    }
}

void leftRotateByOne(int arr[], int size)
{
    int temp = arr[0];
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i ++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    return 0;
}