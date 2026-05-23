class MinStack {
public:
    stack<int> st;
    stack<int> m;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        if(m.empty() || val<=m.top()){
            m.push(val);
        } else {
            m.push(m.top());
        }
    }
    
    void pop() {
        st.pop();
        m.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return m.top();
    }
};
