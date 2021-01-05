//Pointers are symbolic repersentation of addresses
//int *ptr;   //ptr can point to an address which holds int data


// int *ptr = &var;  - assigning the address of a var to a pointer
// *ptr = 20; - assigning the value which are stored in the address

#include<iostream>
using namespace std;
void pointer()
{
    int var = 10;
    int *ptr;
    ptr = &var;

    cout << ptr << " ";  // 0x7ffcb9e9ea4c
    cout << var << " ";  // 10
    cout << *ptr << " ";  // 10   
}

int main()
{
    pointer();
}
// --------------------------------------------------------------------------------------------------------------------------------------------

// Diff ways to pass C++ arguments to a function
// Call by value
// Call by reference with pointer argument
// Call by reference with reference argument

