#include <stdlib.h>

void printArray(int arr[], int length);

int gcd(int a, int b);

void leftRotate(int arr[], int times, int length)
{
    int i, j, k, temp;

    times = times % length;
    int g_c_d = gcd(d, n);
    for(i = 0; i < g_c_d; i++)
    {
        temp = arr[i];
        j = i;
        while(1)
        {
            k = j + times;
            if(k >= length){
                k = k - length;
            }
            if(k == i){
                break;
            }
            arr[j] = arr[k];
        }
        arr[j] = temp;
    }
}




void printArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }else{
        return gcd(b, a % b);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    getchar();
    return 0;
}