// Dynamic array is an array whose size can be changed during execution of the program

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = { 2, 4, 3};
    v.push_back(8); // 2, 4, 3, 8
    v.push_back(5);
    cout << v.size() << " \n"; // or v.length()
    cout << v[1] << " \n"; // 4
    
    v.erase(v.begin() + 2); // remove third element
    
    for(auto x : v)   // print all elements in it
    cout << x << " ";
    cout << "\n";

// 2, 4, 3
cout << v.back() << "\n";  //  (3) returns the last ele in the vector
v.pop_back(); // removes the last ele
cout << v.back() << "\n";  // 4


// initializing a vector
  
    int n = 4;
    vector<int> vect(n, 10); // vector of size n with all values as 10
    vect.push_back(4);
    vect.push_back(8);
    vect.push_back(3);

    for(int x : vect)
    cout << x << "  ";
    cout << "\n";

    sort(vect.begin(), vect.end()); // 3, 4, 8, 10, 10, 10, 10
    
// lower_bound returns an iterator pointing to the first element in the range [first,last)
// which has a value not less than ‘val’. 
    auto it =  lower_bound(vect.begin(), vect.end(), 10);
    cout << (it - vect.begin()) << " \n";  // 3

//upper_bound returns an iterator pointing to the first element in the range [first,last) 
//which has a value greater than ‘val’.

    auto it1 = upper_bound(vect.begin(), vect.end(), 10);
    cout << (it1 - vect.begin()) << "\n";  // 7


    vector<int> arr = {1, 2, 3, 4,5,6};
    int sum = 0;
    for(auto x : arr)
    {
        sum = sum +x;
        cout << sum << "  ";  //1 3 6 10 15 21
    }
  


    return 0;
    


}
// 5
//4
//2 4 8 5
//5
//8
//10  10  10  10




