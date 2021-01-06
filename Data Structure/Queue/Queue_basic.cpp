//  

#include<bits/stdc++.h>
using namespace std;
int main()
{   // Deque - it is slower than a vector
    deque<int> d;
    d.push_back(5); // [5]
    d.push_back(2); // [5,2]
    d.push_front(3); // [3,5,2]
    d.pop_back(); // [3,5]
    d.pop_front(); // [5]

    // Queue
// adding an element to the end of the queue, and removing the first element in the queue. It is only possible to
// access the first and last element of a queue.

    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout << q.front(); // 3
    q.pop();
    cout << q.front(); // 2

    // Priority Queue
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(7);
    pq.push(2);
    cout << pq.top() << "\n"; // 7
    pq.pop();
    cout << pq.top() << "\n"; // 5
    pq.pop();
    pq.push(6);
    cout << pq.top() << "\n"; // 6
    pq.pop();

    return 0;
} 
