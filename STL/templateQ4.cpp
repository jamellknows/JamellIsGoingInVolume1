#include <iostream>

using namespace std;

template <class T> //typename is for functions class is for classes 
class Test
{
    private: 
    T val;
    public:
    static int count;
    Test(){ count++ }
};
//classes have to be called before main if they need to be initialised
template<class T> 
int Test<T>::count = 0; 

int main()
{
    Test<int> a;
    Test<int> b;
    Test<double> c;
    cout << Test<int>::count << endl;
    cout << Test<double>::count <<endl;
}