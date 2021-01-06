// An array whose value is either 0 or 1 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset<10> s; // contain 10 elements
    s[4] = 9;
    s[3] = 3;
    s[1] = 8;
    s[12] = 32;
    cout << s[4] << " \n"; // 1
    cout << s[2] << " \n"; // 0
    cout << s[12] << " \n"; // 1 

   bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));

    cout << a.count() << "\n"; // (5) count the number of 1's

    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110 

}