// Comparison based sorting technique based on Binary heap data structure
// 

#include<iostream>
using namespace std;
void HeapSort(int arr[], int n)
{
    
}

void Print(int arr[], int n)
{
    for(int i =0; i<n; i++)
    cout << arr[i] << " ";
}



int main()
{
    int n;
    int arr[] = { 1, 4, 2, 3, 6, 5, 88, 33, 45};
    n = sizeof(arr)/sizeof(arr[0]);
    HeapSort(arr, n);
    Print(arr, n);
}