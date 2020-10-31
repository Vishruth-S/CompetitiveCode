
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

// Logic for program:
// Enqueue x to q2
// One by one dequeue everything from q1 and enqueue to q2.
// Swap the names of q1 and q2

struct Stack
{
    queue<int> q1;
    queue<int> q2;
    
    void enque(int x)
    {
        // Push x first in empty q2 
        q2.push(x);

        // Push all the remaining elements in q1 to q2. 
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        // Swap the names of two queues 
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    
    int dequeue()
    {
        // int x;
        // while(!q1.empty())
        // {
        //     x = q1.front();
        //     q1.pop();
        // }
        // return x;
        return q1.back();
    }
};

int main()
{
    struct Stack s;
    s.enque(1);
    s.enque(2);
    s.enque(3);
    s.enque(4);
    s.enque(5);
    
    cout<<"\nElement removed is: "<<s.dequeue();
    cout<<"\nElement removed is: "<<s.dequeue();
    cout<<"\nElement removed is: "<<s.dequeue();
    
    return 0;
}
