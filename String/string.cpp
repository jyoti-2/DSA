

// A program to check if strings are rotation to each other or not

#include<bits/stdc++.h>
using namespace std;

Arerotation(string a, string b)
{   
    if(a.length() != b.lenght())
        return false;

    string temp = a + a;
    return(temp.find(b) != string :: npos);

}

int main()
{
    string a, b;
    cin >> a>>b;
    cout << Arerotation(a, b);
    return 0;
}