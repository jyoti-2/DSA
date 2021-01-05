#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = { 2, 4, 3};
    v.push_back(8);
    v.push_back(5);
    cout << v.size() << " \n";
    
    v.erase(v.begin() + 2); // remove third element
    
    for(auto x : v)
    cout << x << " ";

    return 0;
}


// initializing a vector
# include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n = 4;
    vector<int> v(n, 10); // vector of size n with all values as 10
    for(int x : v)
    cout << x << " ";
    return 0;
    
    
}

// Unordered map
// unordered_map is an associated container that stores elements formed by combination of key value and a mapped value.
// The key value is used to uniquely identify the element and mapped value is the content associated with the key. 
//Both key and value can be of any type predefined or user-defined.

#include <bits/stdc++.h>
using namespace std;

int main()
{   unordered_map<string, int> m;// string - key and int - mapped value
    m["jyot"]  = 22;
    m["Anurag"] = 12;
    m["Abhishek"] = 20;
    for(auto x:m)
    cout << x.first << " " << x.second  << " \n";
    return 0;



}



int main()
{   vector<int> arr = {1, 2, 3, 4,5,6};
    int sum = 0;
    for(auto x : arr)
    {
        sum = sum +x;
        cout << sum << "  ";  //1 3 6 10 15 21
    }
  
    return 0;
}


