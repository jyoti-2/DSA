// Struct member can not be initialized with declaration
// Struct - user defined data type used to store a group of data

#include<iostream>
using namespace std;

// Structure declaration
struct var  // Can contain C++ Variable or normal C++ Function
{
    string name; 
    int age;
    int number;
};

void print(struct var p)  // p - Structure variable
{
 cout<< p.name << " "<< p.age<< " "<< p.number << "\n"; // Struct member are accessed using dot operator
}

int main()
{
    struct var p = {"Jyoti", 13, 432}; // initialization of structure varaible
    
    struct var arr[10]; // Array of structure
    arr[0].name = "Anu";
    cout << arr[0].name << "\n";

    struct var *p2 = &p;  // p2 is pointer to structure p
    cout << p2->name << " "<< p2->age << "\n"; 

    print(p);
    return 0;
}   

// pointer to structure members are accessed using -> 

// Output
//Anu
//Jyoti 13
//Jyoti 13 432



// Structure vs Class in C++
// Structure is same as class except structure is not secure and cannot hide its implementation details from the end user 
//while a class is secure and can hide its programming and designing details

// Members of a class are private by default and members of a struct are public by default.