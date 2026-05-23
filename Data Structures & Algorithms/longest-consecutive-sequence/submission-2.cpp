class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ml=0;

        for(int i : s){
            if(s.find(i-1) == s.end()){
                int cn = i;
                int cnt = 1;

                while(s.find(cn+1) != s.end()){
                    cn++;
                    cnt++;
                }
                ml = max(ml,cnt);
            }
        }
        return ml;
    }
};
