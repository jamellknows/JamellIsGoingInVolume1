#include <cstdlib>
#include <iostream>
#define MAX 1000;
using namespace std;

//since array is globa, it is initialised as 0
bool has[MAX + 1][2];

//searching if X is present in the given array or not

bool search(int X)
{
    if(x >= 0){
        if(has[X][0] == 1)
        {
            return true;
        }else {
            return false;
        }
    }
    //if X is negative take its absolute value
    X = abs(X);
    if(has[X][1] == 1)
    {
        return true;
    }else{
        return false;
    }
}

void insert(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= 0)
        {
            has[a[i]][0] = 1;
        }else{
            has[abs[a[i]]][1] = 1;
        }
    }
}

int main()
{
    int a[] = {-1, -9, -5, -8, -5, -2};
    int n = sizeof(a)/sizeof(a[0]);
    insert(a, n);
    int X = -5;
    if(search(X) == true)
    {
        cout << "Present";
    }else{
        cout << "Not Present";
    }
    return 0;
}

//This is index mapping using another array of booleans called has
//mapping values of has for negative and positive