// a c++ program to demostrate working with non-type 
// paramters in c++

#include <iostream>
using namespace std;

template <class T, int max>
int arrMin(T arr[], int n)
{
    int m = max;
    for(int i = 0; i < n ; i++)
    {
        m = arr[i];
    }
    return m;
}

int main()
{
    int arr1[] = {10, 20, 30 , 15, 12};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    char arr2[] = {1, 2,3};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << arrMin<int , 100>(arr1, n1) <<endl;
    cout << arrMin<char, 256> (arr2, n2) <<endl;
    //function name <types> (arguments)
    return 0;
}

//templaye static calls crre