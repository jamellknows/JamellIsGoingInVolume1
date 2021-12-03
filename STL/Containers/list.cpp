#include <iostream>
#include <list>
#include <iterator> 

using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); it++)
    {
        cout << '\t' << *it;
        cout << '\n';
    } // can also use cbegin()
}

int main()
{
    list <int> gqlist1, gqlist2;

    for(int i = 0; i < 10 ; i++)
    {
        gqlist1.push_back(i * 2);
        gqlist2.push_back(i * 3);
    }

    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);
    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);

    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back :" << gqlist1.back();

    cout << "\ngqlist2.pop_back() :";
    gqlist2.pop_back();
    showlist(gqlist2);

    cout << "\ngqlist1.reverse() :";
    gqlist1.reverse();
    showlist(gqlist1);

    cout << "\ngqlist2.sort():";
    gqlist1.sort();
    showlist(gqlist2);

    return 0;






    
    

}

/* other functions of the gqlist
front()- returns the value of the first element in the list
back() - returns the last element in the list
push_back(g) - adds a new element g at the end
push_front(g) - adds a new element g at the front  
pop_front() - removes the first element in the list and reduces the size by 1
pop_back() - removes the last element in the list and reduces the size by 1
list::begin() - returns an iterator pointing to the first element of the list
if used with iterator can be used as a pointer it list <int> :: iterator it 
list::end() returns an iterator pointing to the last element of the list 
and then you can say it.begin() but if called on the list it is list::begin()
rbegin() returns a reverse iterator which points to the last element of the list. 
rend() returns a reverse iterator which points to the position before the begining of the list
cbegin() constant iterator that points at the begining used to travers 
cend() does the same 
crbegin() returns a constant iterator which points to the last element of the ist i.e reversed beginign of conitainer. 
crend() returns a constant reverse iterator which points to the theortical element prrecding the first
// the reverse end  so doesn't point to the brgining 
empty() boolean if is empty or not
insert() allows the insertion of a new element
erase() allows the removal of a single element or a range of elements
assign() removes all elements in the list whcich are equal to a given element
list::remov_if() is used for conditional removal 
reverse() - reverse the list
size() returns the number of elements in the list
resize() used to resize a function container
sort() used to sort a list
max_size - maximimum number of elements a list can contain

emplace_front() insert a nre element into the list container
emplace_back() add a new element into the back container
= used to assign new content 
swap() sweap contents
splice() transfer elements from one list ot another
merge() usef to merge 2 sorted lists into one
emplace() extends a list by adding an element at a given position
