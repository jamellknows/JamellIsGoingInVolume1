// this is the same as the previous example, 
// but it allows for default parameters to be passed

#include <iostream>

using namespace std;


template <class T, class U = char>
class A 
{
    public:
    T x;
    U y;
    A() { cout << "Constructor Called of type " << typeid(x).name() << " and " << typeid(y).name() << endl;}

};
// typeid(x).name() is bad only gives i or c
// depends on compiler
// make typename check
int main ()
{
    A<bool, bool> a;
    A<string, double> b;
}