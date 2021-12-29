//with java you write class files 

class RotateArray {

    public void leftRotate(int arr[], int times)
    {
        for(int i = 0; i < times; i++)
        {
            leftRotateByOne(arr, length);
        }
    }

    public void leftRotateByOne(int arr[])
    {
        int temp = arr[0];
        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[length - 1] = temp;
    }

    public void printArray(int arr[])
    {
        for(int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args)
    {
        RotateArray rotate = new RotateArray(); // declare new class instance
        int arr[] = {1, 2, 3, 4, 5, 6, 7 };
        rotate.leftRotate(arr, 2, 7);
        rotate.printArray(arr, 7);
    }
}