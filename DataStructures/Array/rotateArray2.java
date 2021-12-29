class RotateArray{

    int gcd(int a, int b)
    {
        if(b == 0){
            return a;
        }
        return gcd(b, a%b);
    }

    void rotateLeft(int arr[], int length, int times)
    {
        int g_c_d = gcd(times, length);
        int i, j, k , temp;
        for( i = 0; i < g_c_d; i++)
        {
            j = i;
            while(1){
                k = j + times;
                if(k >= length){
                    k = k - length;
                }
                if(k == i)
                {
                    break;
                }
                arr[j] = arr[k];
            }

        }
    }

    void printArray(int arr[], int length)
    {
        for(int i = 0; i < length; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main()
    {
        RotateArray rotate = new RotateArray();
        int arr[] = {1, 2, 3, 4, 5, 6, 7};
        rotate.rotateLeft(arr, 2, 7);
        rotate.printArray(arr, 7);

    }



}