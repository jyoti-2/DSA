// The array is virtually split into a sorted and an unsorted part, values from the unsorted part are picked and placed at the correct position in the sorted part.
// Time complexity = O(n^2)

#include<iostream>
using namespace std;
void insertion(int arr[], int n)
{   
    int i, j, key;
    for(i =1; i<n; i++)
    {   
        key = arr[i];
        j = i-1;
    

    while( j >= 0 && arr[j] > key)
    {
        arr[j+1] = arr[j];
        j = j-1;
    }
    arr[j+1] = key;
    }

}


void print( int arr[], int n)
{
    for(int i =0; i<n; i++)
    cout << arr[i] << " ";
}

int main()
{
    int n ;
    int arr[] = { 2, 1, 4, 8, 5, 7, 9, 12, 10};
    n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr, n);
    print(arr, n);
}