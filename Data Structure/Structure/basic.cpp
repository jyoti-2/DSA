// Struct member can not be initialized with declaration

#include<iostream>
using namespace std;
struct var
{
    string name;
    int age;
    int number;
};

void print(struct var p)  
{
 cout<< p.name << " "<< p.age<< " "<< p.number;
}

int main()
{
    struct var p = {"Jyoti", 13, 432}; // initialization of structure varaible
    print(p);
    return 0;
}

// pointer to structure members are accessed using -> 