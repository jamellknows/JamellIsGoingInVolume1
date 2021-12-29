function leftRotate(arr, d, n)
{
    for(let i = 0; i < d; i++)
    {
        leftRotateByOne(arr, n);
    }
}

function leftRotateByOne(arr, n)
{
    let i, temp;
    temp = arr[0]
    for( i = 0; i < n - 1; i ++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

function printArray(arr, n)
{
    for(i = 0; i < n; i ++)
    {
        document.write(arr[i] + " ");
    }
}

var arr = [1, 2, 3, 4, 5, 6, 7];
leftRotate(arr, 2, 7);
printArray(arr, 7);