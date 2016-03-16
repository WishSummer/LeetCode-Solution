class Queue {
public:
    stack<int>inStack;
    stack<int>outStack;
    // Push element x to the back of queue.
    void push(int x) {
        if(outStack.empty() != true)
        {
            while(outStack.empty() != true)
            {
                inStack.push(outStack.top());
                outStack.pop();
            }
        }
        inStack.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if(inStack.empty() != true)
        {
            while(inStack.empty() != true)
            {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        outStack.pop();
    }

    // Get the front element.
    int peek(void) {
        if(inStack.empty() != true)
        {
            while(inStack.empty() != true)
            {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        return outStack.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return(inStack.empty()&&outStack.empty());
    }
};
