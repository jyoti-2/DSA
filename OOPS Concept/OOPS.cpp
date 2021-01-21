// Class - User defined data type, holds its data members and member function - no memory is allocated
// Which can be used by creating an instance of the class(Object) - memory is allocated 

// Encapsulation - it leads to data abstraction or hiding( Wrapping up of data and information under a single unit) 

// Abstraction - it means displaying only essential information and hiding the details.

// Abstraction using access Specifiers:
// Public: can be accessed from anywhere in the program
// Private: can be accessed only from within the class
// Ptotected: Can be accessed by any derived class of that class.

// public members can access the private members as they are inside the class.
// By default access specifier for the members will be private

// Polymorphism( having many form) - ability of a message to be displayed in more than one form

// Inheritence - The capability of a class to derive properties and characteristics from another class


#include <iostream> 
using namespace std; 
  
class implementAbstraction 
{ 
    private: 
        int a, b; 
  
    public: 
      
        // method to set values of private members 
        void set(int x, int y) 
        { 
            a = x; 
            b = y; 
        } 
          
        void display() 
        { 
            cout<<"a = " <<a << endl; 
            cout<<"b = " << b << endl; 
        } 
}; 
  
int main()  
{ 
    implementAbstraction obj; 
    obj.set(10, 20); 
    obj.display(); 
    return 0; 
} 

