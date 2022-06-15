#include <iostream>
#include <cstdlib>

using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
    if(sizeof(arr)/sizeof(arr[0]) == r)
    {
        r = r-1;
    }

if(r>= l)
{
    int mid = l + (r -l) /2;

    if(arr[mid] == x)
    {
        return mid;
    }

    if(arr[mid] > x)
    {
        return binarySearch(arr, l,  mid-1, x);
    }

    return binarySearch(arr, mid+1, r, x);
}

return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 14};

    int x = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr, 0,  n-1, x); // dumb for it not to 
    (result == -1)? cout << "element is not present in the array":
    cout << "Element is present at index " << result << endl;
    return 0;
}  


// code recieved from geeks for geeks. Personally I would do it with 3 arguements 


 


