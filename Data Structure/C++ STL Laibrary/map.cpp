



// Unordered map
// unordered_map is an associated container that stores elements formed by combination of key value and a mapped value.
// The key value is used to uniquely identify the element and mapped value is the content associated with the key. 
//Both key and value can be of any type predefined or user-defined.

   unordered_map<string, int> m;// string - key and int - mapped value
    m["jyot"]  = 22;
    m["Anurag"] = 12;
    m["Abhishek"] = 20;
    for(auto x:m)
    cout << x.first << " " << x.second  << " \n";
    return 0;

   vector<int> arr = {1, 2, 3, 4,5,6};
    int sum = 0;
    for(auto x : arr)
    {
        sum = sum +x;
        cout << sum << "  ";  //1 3 6 10 15 21
    }
  
    return 0;
}
