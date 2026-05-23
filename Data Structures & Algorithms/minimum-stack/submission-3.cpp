class MinStack {
public:
    vector<int> s;
    vector<int> minStack;

    MinStack() {
    }
    
    void push(int val) {
        minStack.push_back((s.size() == 0) ? val : min(val, minStack.back()));
        s.push_back(val);
    }
    
    void pop() {
        s.pop_back();
        minStack.pop_back();
    }
    
    int top() {
        return s.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};
