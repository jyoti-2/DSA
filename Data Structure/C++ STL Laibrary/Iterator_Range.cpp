// An iterator is a variable that points to an element in a data structure
// begin() - points to the first ele
// end() - points to the position after the last ele


#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> v = { 2, 3, 5, 7, 8 ,9};
    reverse(v.begin(), v.end()); // reverse the order of the ele

    for(int x:v)
    cout << x << " "; // 9 8 7 5 3 2
    cout << "\n";

    random_shuffle(v.begin(), v.end()); // shuffles the order of the ele
    for(int x:v)
    cout << x << " "; // 3 8 5 7 9 2
    cout << "\n";


    return 0;

}


// These functions can also be used with an ordinary array. In this case, the
// functions are given pointers to the array instead of iterators:
// ex sort(a , a+n)