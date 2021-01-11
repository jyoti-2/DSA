// Classes with Inheritence

#include<bits/stdc++.h>
using namespace std;

#define NAME_SIZE 50 // macro

class Person
{
    int id;  // all members and methods are private by default
    char name[NAME_SIZE];

    public:
    void aboutMe()
    {
        cout << " I am a person" << " \n";
    }
};

class Student: public Person
{
    public:
    void aboutMe()
        cout << " I am a student" << "\n";

}


int main()
{
    Student *p = new_student();
    p -> aboutMe(); // print i am a student
    delete p ; // delete allocated memory
    return 0;
}

// 