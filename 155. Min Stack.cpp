class MinStack {
public:
    /** initialize your data structure here. */    
    stack<int> stk;
    stack<int> min_stk;
    MinStack() {}
    
    void push(int x) {
        if(min_stk.empty() || x <= min_stk.top()) min_stk.push(x);
        stk.push(x);
    }
    
    void pop() {
        if(stk.top() == min_stk.top()) min_stk.pop();
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return min_stk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */