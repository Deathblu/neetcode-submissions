class MinStack {
public:
    std::vector<int> st{};
    std::vector<int> min{};
    MinStack() {
        
    }
    
    void push(int val) {
        if (min.empty()) {
            min.push_back(val);
        } else {
            if (min.back() > val) {
                min.push_back(val);
            } else {
                min.push_back(min.back());
            }
        }

        st.push_back(val);
    }
    
    void pop() {
        st.pop_back();
        min.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return min.back();
    }
};
