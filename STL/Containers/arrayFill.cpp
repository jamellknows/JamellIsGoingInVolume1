#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 6> ar;
    array <int, 0> br;

    //check if size is empty 

    ar.empty()? cout << "Array is empty" : cout << "Array not empty" <<endl;
    // boolean 

    ar.fill(0);
    // fill array with 0's

    cout << "Array after filling operation is : ";

    for(int i = 0; i < ar.size(); i++)
    {
        cout << ar.at(i) << " ";
    }
    cout << endl
    return 0;


    }