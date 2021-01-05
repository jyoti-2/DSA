// Divide and conquer algo
// Divide the input array into two halves, calls itself for the two halves, and then merge the two sorted halves.

#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for(int i = 0; i < n1; i++)
        l[i] = arr[l+i];
    for(int j = 0; j <n2; j++)
        R[j] = arr[m+1+j];

    int i = 0;
    int j = 0;
    int k = l;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;        
    }
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int l, int r)
{
    if ( l >= r)
      return;

    int m = (l+r-1)/2;
    mergesort(arr, l, m);
    mergesort(arr, m+1, r);
    merge(arr, l, m, r);
}

void printarray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    cout << arr[i] <<" ";
}

int main()
{
    int n;
    int arr[] = {2, 1, 4, 3, 7, 5, 18, 9, 10};
    n = sizeof(arr)/sizeof(arr[0]);
    merge(arr, l, m, r);
    mergesort(arr, l, r);
    printarray(arr, n);
}
