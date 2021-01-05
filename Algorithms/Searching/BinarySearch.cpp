// Binary search- recursive approach
// time complexity = o(logN)

#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int l, int r, int x)
{
    if (l <= r)
    {
        int mid = l+(r-1)/2;
        if(arr[mid] == x)
            return mid;
       
        if(arr[mid] > x)
            return binarysearch(arr, n, l, mid-1, x);
        
        return binarysearch(arr, n, mid+1, r, x);
        
    }
    return -1;
} 
   
int main()
{
    int n;
    int x = 12;
    int arr[] = {2, 3, 6, 8, 9, 12, 15};
    n = sizeof(arr)/sizeof(arr[0]);
    int result =  binarysearch(arr,n, 0, n-1, x );
    (result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result; 
    return 0;

}