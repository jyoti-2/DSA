#include<bits/stdc++.h>
using namespace std;

void RotateOnePosition(int arr[], int n)
{   
   int x = arr[n-1];
    for(int i=n-1; i>0; i--){
    arr[i] = arr[i-1];
    }
    arr[0] = x;


for(int i =0 ; i<n; i++)
cout << arr[i] << " ";

}

int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];
    RotateOnePosition(arr, n);
    return 0;

}

#include<bits/stdc++.h>
using namespace std;

void rotateKTimes(int arr[], int n, int k)
{   k = k % n; // After every n rotation the array will become same as initial array
    for(int i= 0; i<n; i++)
    {
        if(i < k)
            cout << arr[n-k+i] << " ";
        else
            cout << arr[i-k] << " ";
    }


}

int main()
{
     int n, k;
    cin >>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];
    rotateKTimes(arr, n, k);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void word(string s)
{   
    string temp = "";
    
    for(int i=0; i<s.size(); i++)
    {   
        if (s[i] == ' ')
        {
            cout << temp << "\n";
            temp = "";
        }
        else
        {
            temp = temp + s[i];
        }
    } 

    cout << temp << "\n";
    
}
int main()
{
    string s;
    getline(cin, s);
    word(s);
    return 0;
    
}

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r);
int KthSmallestEle(int arr[], int l, int r, int k)
{
    if( k > 0 && k <= r-l+1)
    {
        int pos = partition(arr, l, r);
        if(pos-1 == k-1)
            return arr[pos];
        if(pos-1 > k-1)
            return KthSmallestEle(arr, l, pos-1, k);

    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for(int j = l; j <= r-1; j++)
    {
        if(arr[j] <= x){
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}
int main()
{
     int n, k;
    cin >>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];
    cout << KthSmallestEle(arr, 0, n-1, k);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int sort(int arr[], int n)
{
    for(int i =0; i<n; i++)
    {
        if (arr[i] == 0)
        cout << arr[i] << " ";
        continue;
    }
    for(int i =0; i<n; i++)
    {
        if (arr[i] == 1)
        cout << arr[i] << " ";
        continue;
    }
    for(int i =0; i<n; i++)
    {
        if (arr[i] == 2)
        cout << arr[i] << " ";
        continue;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n;i ++)
    cin >> arr[i] ;
    sort(arr, n);
    return 0;
}

// Move all negative numbers to beginning and positive to end

#include<bits/stdtr1c++.h>
using namespace std;

int move(int arr[], int n)
{
    int j = 0;
    for(int i=0; i<n; i++)
    {   
        
        if(arr[i] < 0)
        {
            if(i != j)
            swap(arr[i], arr[j]);
            j++;
        }
            
    }
    for(int i=0; i<n; i++)
    cout << arr[i] << " ";
}
int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];
    move(arr, n);
    return 0;
}

