using System;

class rotateArray {
    static void leftRotate(int[] arr, int times, int length)
    {
        for(int i = 0; i < times; i++)
        {
            leftRotateByOne(arr, n);
        }
    }

    static void leftRotateByOne(int[] arr, int length)
    {
        int temp = arr[0];
        for(int i = 0; i < length - 1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[length-1] = temp;
    }

    static void printArray(int[] arr, int length)
    {
        for(int i = 0; i < length; i++)
        {
            Console.Write(arr[i] + " ");
        }
    }

    public static void Main()
    {
        int[] arr = {1, 2, 3, 4, 5, 6, 7};
        leftRotate(arr, 2, 7);
        printArray(arr, 7);
    }
}