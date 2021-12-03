#include <iostream> 
#include <array>
using namespace std;

int main()
{
    array<int,6> ar = {1,2,3,4,5,6};

    cout << "First elementf array is :";
    cout << ar.front() <<endl;

    cout << "The last elemet of the array is :";
    cout << ar.back() <<endl;

    return 0;
}