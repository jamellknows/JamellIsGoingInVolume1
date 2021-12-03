#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> g1;

    for(int i = 1l i <= 5; i++)
    {
        g1.push_back(i);
    }

    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.ax_size();

    g1.resize(4);

    cout << "\nSize: " << g1.size();

    if(g1.empty() == false)
    {
        cout << "\nVecotr is not empty";
    }else
    {
        cout << "\nVector is empty";
    }

    //Shrinks the vector 
    g1.shrink_to_fit();
    cout << "\nVector elements are : ";
    for(auto it = g1.begin(); it != g1.end() ; i it++)
    {
        cout << *it << " ";
    }

    return 0;
}