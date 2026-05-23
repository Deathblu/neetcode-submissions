class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;

        stack<int> st;
        int mp = 0;

        for(int p:prices){
            if(!st.empty() && p < st.top()){
                while(!st.empty() && st.top() > p){
                    st.pop();
                }
            }

            if(st.empty()){
                st.push(p);
            } else{
                mp = max(mp, p - st.top());
            }
        }
        return mp;
    }
};
