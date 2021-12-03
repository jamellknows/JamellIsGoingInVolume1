#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.assign(5, 10);

    cout << "The vector elements are: ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.push_back(15);
    int n = v.size();

    cout << "\nThe last element is: " << v[n-1] <<endl;

    v.pop_back();

    cout << "\nThe vecotr elements are: ";
    for(int i = 0; i < v.size(); i ++)
    {
        cout << v[i] << " ";
    }

    v.insert(v.begin(), 5);

    cout << "\nThe first element is: " << v[0];

    v.erase(v.begin());

    cout << "\nThe first element is: " << v[0];

    v.emplace(v.begin(), 5); // place an element at this position (position, value)
    cout << "\nThe first element is : " << v[0];

    v.emplace_back(20);
    n  = v.size();
    cout << "\nThe last elemnt is: " << v[n-1];

    v.clear();
    cout << "\nVecotr size after clear: " <<v.size();
    //erase you can specify a range 

    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    cout << "\n\nVector 1: ";
    for(int i = 0l i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << "\nVector 2: ";
    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    v1.swap(v2);

    cout << "\nAfter swap \nVector 1: ";
    for(int i = 0; i < v1.size(); i ++)
    {
        cout << v1[i] << " ";
    }

    cout << "\nVecotr 2: ";
    for(int i = 0; i < v2.size(); i ++)
    {
        cout << v2[i] << " ";
    }
}