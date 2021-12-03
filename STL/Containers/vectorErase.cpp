#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myvector{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(auto i = myvector.begin(); i != myvector.end(); i++)
    { 
        //use pointers to traverse an array 
        if(*i %2 == 0){
            myvector.erase(i);
            i--;
        }
    }

    for (auto it = myvector.begin(); it != myvector.end(); i++)
    {
        cout << ' ' << *it;
    }
    return 0;
    // the begin and end methods are pointers 
}