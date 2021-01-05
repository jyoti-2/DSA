
// First non repeating element in a given array
#include <iostream> 
using namespace std; 
  
int firstNonRepeating(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        int j; 
        for (j = 0; j < n; j++) 
            if (i != j && arr[i] == arr[j]) 
                break; 
        if (j == n) 
            return arr[i]; 
    } 
    return -1; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 9, 4, 9, 6, 7, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << firstNonRepeating(arr, n); 
    return 0; 
} 

//---------------------------------------------------
// Hashing in C++
// It is an important data structure, map a given value with a particular key
// Hash function H(x) maps the value x at the index x%10

// Time complexity = O()
#include<bits/stdc++.h>
using namespace std;

int firstnonrepeating(int arr[], int n)
{   // insertion of array element in hash table
    unordered_map <int,int> mp; 
    for(int i =0; i< n; i++)
    mp[arr[i]]++;
    
    for(int i = 0; i<n; i++)
    if(mp[arr[i]] == 1)
        return arr[i];
    return -1;
    
}

int main()
{
   int n;
   int arr[] = { 9, 4, 9, 6, 7, 4};
   n = sizeof(arr)/sizeof(arr[0]);
   cout << firstnonrepeating(arr, n);
   
}

//--------------------------------------------------------

// All non repeating element
int ALlnonrepeating(int arr[], int n)
{   // insertion of array element in hash table
    unordered_map <int,int> mp; 
    for(int i =0; i< n; i++)
    mp[arr[i]]++;
    
   for( auto x: mp)
   if(x.second == 1)
   cout << x.first << " ";   
}