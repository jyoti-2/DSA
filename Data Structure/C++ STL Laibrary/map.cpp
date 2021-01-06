// map is a geenralize array that consists of key value pairs 

// Unordered map
// unordered_map is an associated container that stores elements formed by combination of key value and a mapped value.
// The key value is used to uniquely identify the element and mapped value is the content associated with the key. 
//Both key and value can be of any type predefined or user-defined.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   unordered_map<string, int> m;// string - key and int - mapped value
    m["jyot"]  = 22;
    m["Anurag"] = 12;
    m["Abhishek"] = 20;

    cout << m["Anurag"] << "\n"; // 12
    cout << m["Pinki"] << "\n"; // 0 

// Default key value is 0

    if(m.count("Pinki")) // check if key exists in a map
        cout << " key exist" << " \n";


    // Used to print all the key and values in a map
    for(auto x:m)
    cout << x.first << " " << x.second  << " \n";

    return 0;
}
