#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,6> ar = {1, 2, 3, 4,5, 6};
    array<int ,6> br = {7, 8, 9, 10, 11, 12};

    cout << "The first array ";
    for (int i=0 ; i < ar.size(); i++)
    {
        cout << ar.at(i)<< " ";
    }
    cout << endl;
    cout << "The second array ";
    for(int i = 0 ; i < br.size(); i++)
    {
        cout << br.at(i)<< " ";
    }
    cout << endl;
    ar.swap(br);
    cout << "The first array after swap ";
    for (int i = 0 ; i < ar.size(); i++)
    {
        cout << ar.at(i)<< " ";
    }
    cout << endl;
    cout << "The second array after swap ";
    for(int i=0; i < ar.size(); i++)
    {
        cout << br.at(i)<< " ";
    }
    cout << endl;
    return 0;

    // you can write 
    // (ar.at(i)).swap(br.at(j))
    // swap individual components.

}