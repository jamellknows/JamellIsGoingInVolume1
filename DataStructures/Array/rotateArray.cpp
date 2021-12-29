#include <iostream> 
#include <cstdlib>

using namespace std;

void leftRotateByOne(int arr[], int size)
{
    int temp = arr[0];
    for(int i = 0; i < size-1; i++)
    {
        arr[i] = arr[i+1];

        arr[size-1] = temp;
    }
}

//this rotates everything once

void leftRotate(int arr[], int times, int size)
{
    for(int i = 0; i < times; i++)
    {
        leftRotateByOne(arr, size);
    }
}

// this does it n times

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

//this prints

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8};

    int size = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr, 2, size);
    printArray(arr, size);

    return 0;
}
//this drives