// Set is a data structure that maintains a collection of elements.
// Operation of sets are element insertion, search, removal

// structure set is based on a balanced binary tree and its operations work in O(logn) time.
// structure unordered_set uses hashing, and its operations work in O(1) time on average.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(4);
    s.insert(6);
    s.insert(2);
    s.insert(1);
    s.insert(4);
    cout << s.count(4) << "\n";  // (1) count the no.of occurrence of an ele
    cout << s.count(2) << "\n"; // 1

    s.erase(1); // removes ele 1

    // in set elements can't be assessed using []

    cout << s.size() << "\n";
    for(auto x:s)
    cout << x << " ";
    cout << "\n"; //  2, 4, 6

// In set all their elements are distinct.
// function count always returns either 0 (the element is not in the set) or 1 (the element is in the set)
// insert function never adds an element to the set if it is already there.



multiset<int> C; // it contain multiple instances of the ele
C.insert(5);
C.insert(5);
C.insert(5);
cout << C.count(5) << "\n"; // 3

C.erase(C.find(5));
cout << C.count(5) << "\n"; // 2

C.erase(5);
cout << C.count(5)<< "\n"; //0

auto it = s.begin();
cout << *it << "\n"; // (2) print the first ele in set

vector<int> arr = { 2,1, 5, 3, 7, 9, 3, 6};
for(auto it = arr.begin(); it != arr.end(); it++)
    cout << *it << " "; // 2 1 5 3 7 9 3 6
    cout << " \n";

auto it1 = arr.end();
it1--;
cout << *it1 << "\n"; // print the last ele in set (6)

// The function lower_bound(x) returns an iterator to the smallest element in the
//set whose value is at least x, and the function upper_bound(x) returns an iterator
//to the smallest element in the set whose value is larger than x.

// unordered_set structure does not maintain the order
// of the elements.






return 0;


}