//Single Linked list, Double linked list, Circular Linked List
//Node(data + link-contains the address of next node)
// Single Linked list
// Self referential structure - Contains a pointer to a structure of the same type
#include<iostream>
using namespace std;
struct node // data & link
{
    int data;
    char name;
    struct node *link;  // pointer 

};

int main()
{
    struct node *head = NULL;
    
    return 0;
}