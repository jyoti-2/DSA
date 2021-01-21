// Spiral traversal of matrix

#include<bits/stdc++.h>
using namespace std;



void print(int arr[n][m])
{
    for(int i = 0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        cout << arr[i]arr[j] << " ";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;  // n - row, m - col
    int arr[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        cin >> arr[i]arr[j];
    }

    print(arr[n][m]);
    return 0;
}
























// search an element in a matrix
// finad median in a row wise sorted matrix
// find row with min no. of 1's
// Print ele in sorted order using row col wise
// Maximize size rectangle
// Find a specific pair in a matrix
// Rotate matrix by 90 degrees
// Kth smallest ele in a row col wise sorted matrix
// Common ele in al rows of a given matrix