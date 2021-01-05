// sorting in ascending order
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int arr[] = {1, 3, 2,5, 6,7 , 4};
    int n =  sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr +n); // sort() takes two parameter first array, the length up to which we want the array/vector to get sorted
    for( int i =0; i <n; ++i)
    {
        cout << arr[i]
    }

    return 0;
}


