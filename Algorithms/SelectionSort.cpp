//Repeatedly find the min element from unsorted array and put it at the beginning
// time complexity = O(n^2)

#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y =  temp;
}

void Sort(int arr[], int n)
{   
    int min_idx;
    for(int i = 0; i < n-1; i++ )
    {    min_idx = i;

      for (int j = i+1; j <n; j++)
        
            if (arr[j] < arr[min_idx])
            min_idx = j;
            swap(&arr[min_idx], &arr[i]);

        

    }
}

void printarray(int arr[], int size)
{
    for(int i = 0; i< size; i++)
    cout << arr[i] << " ";
}

int main()
{
    int n;
    int arr[] = {2, 4, 1, 6, 5, 9, 8};
    n = sizeof(arr)/sizeof(arr[0]);
    Sort(arr, n);
    printarray(arr, n);
    return 0;

}




