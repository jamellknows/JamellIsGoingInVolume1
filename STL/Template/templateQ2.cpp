#include <iostream>
using namepsace std;

template <typename T>
void fun(const T&x)
{
    static int count = 0; 
    // shared variable between all same type calls (each instance has own static variable int is it's own instance )
    cout << "x = " << x << "count = " << count << endl;
    ++count;
    return;
}

int main()
{
    fun<int>(1);
    cout << endl;
    fun<int>(1);
    cout << endl;
    fun<double>(1.1);
    cout << endl;
    return 0;
}

// output 
/* x = 1 count = 0
x = 1 count = 1
x = 1.1 count = 0
*/