// Linear search
// time complexity = O(N)
#include<iostream>
using namespace std;
int main()
{
    int n = 7, x = 12;
    int arr[n] = {14, 4, 6, 8,12, 15, 34};
    for(int i = 0; i<n; i++)
    
        if (arr[i] == x)
        cout << i << " \n";
    return 0;
}

