// Repeatedly swap the adjacent elements if they are in wrong order
// Time complexity - O(n^2)

#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}

void bubble(int arr[], int n)
{
    for(int i = 0; i <n-1; i++)
    for(int j = 0; j <n-i-1; j++)
    if (arr[j] > arr[j+1])
        swap(&arr[j+1], &arr[j]);
    
}

void print(int arr[], int n)
{
    for(int i= 0; i<n; i++)
    cout << arr[i] <<" ";
}
int main()
{
    int n;
    int arr[] = { 2, 1, 24, 3, 9, 16, 8, 12};
    n = sizeof(arr)/sizeof(arr[0]);
    bubble(arr, n);
    print(arr, n);

}
