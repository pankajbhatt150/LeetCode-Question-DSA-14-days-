class MyQueue {
public:
    
    stack<int> a,b; // 2 stacks is all we need
    
    MyQueue() {}
    
    void push(int x)
    {
        a.push(x);
    }
    
    int pop()
    {
		// transfering elements
        while(!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
		// deleting last element
        int ans = b.top();
        b.pop();
        while(!b.empty())
        {
            a.push(b.top());
            b.pop();
        }
        
        return ans;
    }
    
    int peek()
    {
		// transfering elements
        while(!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
        int ans = b.top();
        while(!b.empty())
        {
            a.push(b.top());
            b.pop();
        }
        
        return ans;
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */