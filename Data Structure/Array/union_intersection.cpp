// union and intersectionof sorted array

#include<iostream>
using namespace std;

int printunion(int n, int m,  int arr1[], int arr2[])
{
    int i =0;
    int j = 0;
    while(i<n && j<m)
    {
        if (arr1[i] > arr2[j])
        cout << arr2[j++]<<" ";
        else if (arr1[i]< arr2[j])
        cout << arr1[i++] << " ";
        else
        {
            cout << arr1[i++]<<" ";
            j++;
        }
    }
    while(i<n)
    cout << arr1[i++] <<" ";
    while(j<m)
    cout << arr2[j++] <<"\n ";
}


int intersection(int n , int m, int arr1[], int arr2[])
{
    int i =0, j =0;
    while(i<n && j <m)
    {
    if (arr1[i] > arr2[j])
        j++;
    else if (arr1[i]< arr2[j])
        i++;
    else
        {
            cout << arr1[i]<<" \n";
            j++;
            i++;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for(int i =0; i<n; i++)
    cin >> arr1[i];
    for(int j =0; j <m; j++)
    cin >> arr2[j];
    printunion(n, m, arr1, arr2);
    intersection(n, m, arr1, arr2);
    return 0;
}



