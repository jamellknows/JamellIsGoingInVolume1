#include <iostream>
#include <deque>

using namespace std;
//double ended ques are like vectors
// same functions as vectors 
// push and pop for front and back 
// front and back can insert and remove

void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
    {
        cout << '\t' << *it;
        cout << '\n';
    }
}

int main()
{
    deque <int> gquiz;
    gquiz.push_back(10);
    gquiz.push_back(20);
    gquiz.push_front(30);
    gquiz.push_front(40);
    gquiz.push_back(50);
    cout << "The deque is : ";
    showdq(gquiz);

    cout << "ngquiz.size(): " << gquiz.size();
    cout << "ngquiz.max_size(): " << gquiz.max_size();
    cout << "ngquiz.at(): " << gquiz.at(2);
    cout << "ngquiz.front(): " << gquiz.front();
    cout << "ngquiz.back(): " << gquiz.back();


    cout << "ngquiz.pop_front(): ";
    gquiz.pop_front();
    //pop_front and pop_back can't be called midstream
    //WEIRD!! SOME FUNCTIONS CANNOT BE CALLED MID STREAM
    // you can read midstream , but you can not edit/write/delete mid stream 
    cout << "ngquiz.pop_back(): "; 
    gquiz.pop_back();

    gquiz.pop_back();
    showdq(gquiz);

    return 0;

}

//other methods of deque 
/* insert() inserts an element and returns an iterator to that point
rbegin() returns a reverse iterator which points to the last element of a deque
rend() returns a reverse iterator which points to the iterator at the reverse end
cbegin() returns a constant iterator which points to the first element of  container
// can only be used to traverse and not modify
// assign() assigns values to the same or different deque continer

resize() resizes a function 
clear() and erase() remove elements making size 0 
erase removes from a specified position
empty() checks if is empty
operator = used to assign new content to a container
[] references position
emplace_front and emplace_back add to the front and back respectively
find() finds an element in the given range of numbers
returns an iterator to the first element in the range that equals that value

