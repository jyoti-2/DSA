// Kaden's Algorithm
// Contiguous sub-array with max sum

#include<bits/stdc++.h>
using namespace std;

int MaxSum(int arr[], int n)
{
    int max_so_far = 0;
    int max_ending_here = 0;
    int start = 0;
    int end = 0;
    int s = 0;

    for(int i=0; i<n; i++)
    {   
        max_ending_here = max_ending_here + arr[i];
        if(max_so_far < max_ending_here)
         {   max_so_far = max_ending_here;
            start = s;
            end = i;
         }
        if(max_ending_here < 0)
          {
            max_ending_here = 0; 
            s = i+1;
          }       
    }
    cout << start << "  " << end << "\n";
    return max_so_far;
}


int main()
{
   int n;
   cin >> n;
   int arr[n];
   for(int i =0; i<n; i++)
   cin >> arr[i];
   cout << MaxSum(arr, n)<<" \n";
   return 0;
}
