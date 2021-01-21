
// Palindromic Array

#include<bits/stdtr1c++.h>
using namespace std;

void Palindrom(int arr[], int n)
{
   int flag = 0;
   for(int i = 0; i<= n/2 && n!= 0 ; i++)
   {        
      if(arr[i] != arr[n-i-1])
         flag = 1;
         break;
     
   }
   if(flag == 1)
       cout << " Not palindromic" << " ";
   else
      cout << "Palindromic array";
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++)
    cin >> arr[i];
    Palindrom(arr, n);
    return 0;
}

