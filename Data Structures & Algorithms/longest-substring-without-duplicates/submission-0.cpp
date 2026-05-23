class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256,-1);

        int l=0,r=0;
        int n = s.size();
        int cnt=0;

        while(r<n){
            if(m[s[r]] != -1){
                l = max(m[s[r]] + 1, l);
            }

            m[s[r]] = r;

            cnt = max(cnt, r-l+1);
            r++;
        }
        return cnt;
    }
};
