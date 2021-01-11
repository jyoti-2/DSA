// Reverse each word in the string
#include<bits/stdc++.h>
using namespace std;

void Reverse(string s)
{
    stack<char> st;
    for(int i =0; i < s.length(); i++)
        if (s[i] != ' ')
            st.push(s[i]);

        else
        {
            while(st.empty() == false)
            {
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
    while(st.empty() == false) 
    {
        cout << st.top();
        st.pop();
    }   
        
}
int main()
{
    string s;
    getline(cin, s);
    Reverse(s);
    return 0;
}























