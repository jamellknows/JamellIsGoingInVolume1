#include <iostream>
#include <algorithm> // the partiotion algorithm is in here
#include <vector> 

using namespace std;

bool IsEven (int i)
{return (i%2) == 0;}

int main()
{
    vector <int> vec;
    vec.push_back(1);
    vec.push_back(12);
    vec.push_back(98);
    vec.push_back(23);
    vec.push_back(45);
    vec.push_back(2);

    //checking if the vector is partitiond using the is_partitioned() function
    (is_partitioned(vec.begin(), vec.end(), [](auto &em){ return em % 2 == 0;})
    
        // check if this vector is artioned by this condition
) ? cout << "Vector is partitioned" : cout << "vector is not partitioned";

    cout << endl;
    vector<int>::iterator bound;
    partition(vec.begin(), vec.end(), [](auto &em){ return em % 2 == 0;})
   // partition vector by this condition
    

     (is_partitioned(vec.begin(), vec.end(), [](auto &em){ return em % 2 == 0;})
     // check if this vector is artioned by this condition
    ) ? cout << "Vector is partitioned" : cout << "vector is not partitioned";

    cout << endl;

    cout << "The partitioned vector is ";
    for(int&a: vec)
    {
        cout << a << " ";
    }
    return 0;

}//partition isn't working as explained 