// String in C++
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string First = "Jyoti";
    string Last = "Kumari";
    
    cout << First + " " + Last << "\n";
    
    string Fullname = First.append(Last);
    cout << Fullname << "\n";
    
    cout << Fullname.length() << " \n"; // or Fullname.size()
    
    cout << Fullname[0] << " \n"; // Accessing a string
    
    First[4] = 'a';     // use single quote
    cout << First << "\n";
    
    
    return 0;
}

// Jyoti Kumari
// JyotiKumari
//11
//J
//Jyota

#include<iostream>
#include <string>
using namespace std;


int main()
{
    string name;
    cin >> name; // cin considers a space( white space or tab) as a terminating character means it can display only a single word
    cout << name << "\n";
    
    string Fullname;
    getline(cin, Fullname); // used to read a line of text
    cout << Fullname << "\n";
}

// C++ Booleans
// true (1) or false(0)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool IsCodingFun = true;
    bool IsFishtasty = false;
    
    cout << IsCodingFun << " \n"; // 1
    
    int x = 10, y = 12;
    cout << (x < y) << "\n"; //1
    cout << (x == 15) << "\n"; //0
    
    
    int time = 20;
    string result = (time < 18) ? "Good day" : "Good Evening";
    cout << result << "\n"; // Good evening
    return 0;

}

// if....Else (Ternary Operator)
// variable = (condition) ? exp True : exp False;

// If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void,
// and use the return keyword inside the function:
//

//Passby reference- we used normal variables when we passed parameters to a function.Use pass by reference to the function. 
//it's useful when you need to change the value of the arguments:


#include<iostream>
using namespace std;

void swap(int &x,int&y)
{
    int temp = x;
    x = y;
    y = temp;
}


int main()
{
  int a = 10,b = 30;
  string first = "kumari", last = "jyoti";
  
  swap(a,b);
  swap(first,last);
  cout << a << " " << b << " \n";
  cout<< first << " "<< last;
}
// The while loop loops through a block of code as long as a specified condition is true
// When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop
// Break and Continue

// Break - used to come out of the loop
// Continue - breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

#include<iostream>
using namespace std;
int main()
{
    for(int i = 0; i <10; i++)
    {
        if(i == 4)
        break;
        cout << i << "\n"; // 0 1 2 3 
    }
    return 0;
    
}






