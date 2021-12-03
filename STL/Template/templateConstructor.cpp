#include <iostream>

using namespace std;
template<class T, calls U> // multiple template types
class A
{
    T x;
    U y;

    public:
    A() { cout << "constructor called" << endl;}

};

int main()
{
    A<char, char> a;
    A<int, double> b;
    return 0;
}

// with this constructor you can pass multiplr data typr
//more than one arguement to templates, 
// very complicated very powerful seems niche
