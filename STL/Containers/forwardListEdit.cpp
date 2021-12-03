/* code to demostrate forward list push and edit etc

*/
#include <iostream>
#include <forward_list>

using namespace std; 

int main()
{

    forward_list<int> flist = {10, 20, 30 , 40 , 50};

    flist.push_front(60);

    cout << "The forward list after the push operation is " << endl;

    for(int&c : flist)
    {
        cout << c << " ";

    }
    cout << endl;

    flist.emplace_front(70);
    //inserts at the front 

    cout << "The forward list after using the meplace front operation" << endl;

    for(int&c: flist)
    {
        cout << c << " ";
    }

    cout << endl;


    // deleting the first value using popo_front

    flist.pop_front();


    cout << "The forward list after deleting the first element";

    for(int &c : flist)
    {
        cout << c << " ";
    }

    cout << endl;

    return 0; 

}

//forward_list doens't work as described most likely due to this being an older implementation or that forward list wasn't needed 

