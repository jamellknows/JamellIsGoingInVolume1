#include <iostream>

using namespace std;

template <typename T>  
class Array
{
    private:
     T *ptr;
     int size;
    public: 
    Array(T arr[], int s);
    void print();
};

template <typename T>
Array<T>::Array(T arr[], int s) //write functions outside of initial declaration, could have been written inside
{
    ptr = new T[s];
    size = s;
    for(int i = 0; i <size; i++)
    {
        ptr[i] = arr[i];
    }
}

//function initialises an array of size s and type t
// array will be eempty but be of the type 

template <typename T>
void Array<T>::print()
{
    for(int i = 0 ; i < size; i ++)
    {
        cout << ptr[i] << " ";

        //you can also write 
        // cout << " " << *(ptr + i);
    }
    cout << endl;
}

// the point of this is so that you can write multiple functions 
// for different array types

int main()
{
    int arr[5] = {1, 2, 3, 4,5 };
    Array<int> a(arr , 5);
    a.print();
    for (int i = 0; i < arr.length(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}