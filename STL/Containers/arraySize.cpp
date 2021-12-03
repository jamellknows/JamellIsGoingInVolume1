#include <iostream> 
#include <array>
using namespace std; 

int main()
{
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
    array<int, 5> bt;

    cout <<" The number of array elements is : ";
    cout << ar.size()<< endl;

    cout << "The maximium number of elements that the array can hold is ";
    cout << ar.max_size() <<endl;

    return 0;


}