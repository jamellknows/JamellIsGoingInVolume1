#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    
    forward_list<int> flist1;
    forward_list<int> flist2;
    flist1.assign(1 ,2, 3); // this doesn't work as demostrated 
    flist2.assign(5, 10);

    cout << "The elements of the first foward list are" << endl;
    for(int&a: flist1)
    {
        cout << a << " ";
    }
    cout << endl;
    cout << "This is how i've been learning it " << endl;
    for(auto i = flist1.begin(); i != flist1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "The elements of the second list are " << endl;
    for (int&b: flist2) // range of flistb
    {
        cout << b << " ";
    }
    cout << endl;

    return 0; 

}