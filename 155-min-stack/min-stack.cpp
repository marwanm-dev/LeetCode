class MinStack {
public:
    MinStack() {}
    
    void push(int val) {
        stk.push({val, !stk.empty() ? min(val, stk.top().second) : val});
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top().first;
    }
    
    int getMin() {
        return stk.top().second;
    }
private:
    stack<pair<int, int>> stk;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */