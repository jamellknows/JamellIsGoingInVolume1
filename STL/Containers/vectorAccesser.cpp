#include <cstdlib>
#include <iostream>
// accesssor methods for cpp
using namespace std;

int main()
{
    vecotr <int> g1;

    for(int i = 1; i <=10; i++)
    {
        g1.push_back(i * 10);
    }

    cout << "\nReference operator [g] : g1[2] = " << g1[2];

    cout << "\nat : g1.at(4) = " << g1.at(4);

    cout << "\n front() : g1.front() = " << g1.front();

    cout << "\nback() g1.back() = " << g1.back();

    // pointer to the first element

    int* pos = g1.data();

    //.data returns the pointer to the first element 
    // guess thats all you need for data

    cout << "\n The first element is " << *pos;

    // here we dereference it
    return 0;
}