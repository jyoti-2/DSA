// Move all the elements to one side of the array

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i; i <n; i++)
    cin >> arr[i];

    cout << show(arr, n) << " ";
    sort(arr, arr+n);
      cout << show(arr, n) << " ";
      sort(arr, arr+n, greater<int>());
        cout << show(arr, n) << " ";
    return 0;
}