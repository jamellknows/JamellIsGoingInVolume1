#include <cstdlib>
#include <iostream>

using namespace std;
#define EPISLON 0.01


double func(double x)
{
    return x*x*x - x*x + 2;
}


void bisection(double a, double b)
{
    if(func(a) * func(b) >= 0)
    {
        cout << "You have not assusmed the right a and b\n";
        return;
    }

    double c = 1;
    while((b-a) >= EPISLON){

        c = (a+b)/2;

        if(func(c) == 0.0)
        {
            break;
        }

        else if (func(c) * func(a) < 0)
        {
            b = c;
        }
        else{
            a = c;
        }
    }

    cout << "The value of the root is : " << c;

}

int main()
{
    double a = -200, b = 300;
    bisection(a, b);
    return 0;
}

