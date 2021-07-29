#include<bits/stdc++.h>
using namespace std; 

bool anagram(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    if (n != m)
        return 0;
    
    for(int i = 0; i<n; i++)
    {
        if (s1[i] != s2[i])
        return 0;
    }
    return 1;

}


int main() 
{ 
    string s1, s2 ;
    cin >> s1 >> s2;
    cout << anagram(s1, s2);
    return 0;
}