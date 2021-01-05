// Inbuilt sort function for array and vector

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = { 2, 1, 6, 3,4};
    sort(arr, arr+n);       // asending order
    for (int i =0; i<n; i++)
    cout << arr[i] << " ";
    cout << "\n";
    
    
    sort(arr, arr+n, greater<int>());  // descending order
    for (int i =0; i<n; i++)
    cout << arr[i] << " ";
    cout << " \n";
    
    vector<int> v = { 7, 1, 4, 9, 2, 4}; //dynamic array (vector)
    sort(v.begin(), v.end());  // ascending order
    for (auto x:v)
    cout << x << " ";
    cout << " \n";


    sort(v.rbegin(), v.rend()); // descending order
    for(int i =0; i< v.size(); i++)
    cout << v[i] <<" ";
    
    return 0;
}

