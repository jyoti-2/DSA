#include<bits/stdc++.h>
using namespace std;

int palindrome(string str)
{   int low = 0;
    int high = str.length() - 1;

   for(low = 0; low <high; low++)
	    {  if (str[low] != str[high])
	        return 0;
	        high--;
	    }
	return 1;

}
int main()
{
    string str;
    cin >> str;
    cout <<  palindrome(str);
    return 0;

}