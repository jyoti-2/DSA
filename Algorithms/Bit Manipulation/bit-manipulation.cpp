// Check if a given number is power of 2

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int x)
{   
    if(n==0)
        return 0;
    while( n != 1)
    {
        if(n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
   
}
int main()
{
    int n;
    cin >> n;
    isPowerOfTwo(n)? cout << true : cout << false;
}

// Better approach
bool isPowerOfTwo(int x)
    {
        // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
        return (x && !(x & (x - 1)));
    }


// number of 1s in the binary representation of the given no.
    int count_one (int n)
        {
            while( n )
            {
            n = n&(n-1);
               count++;
            }
            return count;
    }
