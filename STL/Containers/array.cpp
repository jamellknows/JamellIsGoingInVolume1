#include <iostream>
#include <array> // for array , at()
#include <tuple> // for array get()

using namespace std;

int main()
{
    array<int, 6> ar = {1, 2, 3, 4, 5, 6};

    cout << "The arra elements are (using at()) : ";
    for(int i = 0; i < 6; i++)
    {
        cout << ar.at(i) << " ";
        cout << endl;
    }


    //Printing array elements using get()

    cout << "The array elements are (using get()) : ";
    cout << get<0> << " " << get<1>(ar) << " ";
    cout get<2> << " " << get<3> (ar) << " ";
    cout << get<4>(ar) << get<5>(ar) << " ";
    cout << endl;

    //printing array elementes using operator []

    for(int i = 0; i < 6; i++)
    {
        for(int i = 0; i < 6; i ++)
        {
            cout << ar[i] << " ";
            cout << endl;
        }
    }
    return 0;

}