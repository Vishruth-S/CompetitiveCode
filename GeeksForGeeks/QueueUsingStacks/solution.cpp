#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

// Logic for program:
// 1. While stack1 is not empty, push everything from stack1 to stack2.
// 2. Push x to stack1 (assuming size of stacks is unlimited).
// 3. Push everything back to stack1.

struct Queue
{
    stack<int> s1;
    stack<int> s2;
    
    // oldest entered element is always at the top of stack 1
    void enque(int x)
    {
        s1.push(x);
    }
    
    // deQueue operation just pops from stack1
    int dequeue()
    {
        if(s1.empty())
            return 0;
        else
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }
};

int main()
{
    struct Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
    
    cout<<"\nElement removed is: "<<q.dequeue();
    cout<<"\nElement removed is: "<<q.dequeue();
    cout<<"\nElement removed is: "<<q.dequeue();
    
    return 0;
}
