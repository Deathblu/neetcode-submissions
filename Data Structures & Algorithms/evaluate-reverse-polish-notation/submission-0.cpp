class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c : tokens){
            if(c == "+" || c == "*" || c == "-" || c == "/"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if(c == "+"){
                    st.push(x+y);
                } else if(c == "-"){
                    st.push(y-x);
                } else if(c == "*"){
                    st.push(y*x);
                } else if(c=="/"){
                    st.push(y/x);
                }
            }
            else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};
