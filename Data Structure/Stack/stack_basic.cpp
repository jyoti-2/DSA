//  LIFO
// adding an element to the top, and removing an element from the top.
// Push, Pop, Peek/Top, isEmpty - O(1)
// all lines that start with # are processed by preprocessor which is a special program invoked by the compiler

// Implementation of stack using STL 

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(5);
    cout << s.top() << "\n"; // 5
    s.pop();
    cout << s.top() << "\n"; // 2
    return 0;
} 

// Implementation of stack using array
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack
{
    public:
        int top;
        int a[MAX]; // Max size of stack
        Stack()
        {
            top = -1;
        }
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[top++] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
 
int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}
 
// Driver program to test above functions
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
 
    return 0;
}

// Implement stack using linked list

class StackNode
{
    public:
        int data;
        StackNode *next;
};

StackNode *newNode(int data)
{
    StackNode* stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}
 
int isEmpty(StackNode* root)
{
    return !root;
}
 
void push(StackNode** root, int data)
{
    StackNode* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    cout << data << " pushed to stack\n";
}
 
int pop(StackNode** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
 
    return popped;
}
 
int peek(StackNode* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}
 
// Driver code
int main()
{
    StackNode* root = NULL;
 
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
 
    cout << pop(&root) << " popped from stack\n";
 
    cout << "Top element is " << peek(root) << endl;
 
    return 0;
}

