class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> lis;
        int n = strs.size();

        for(int i=0;i<n;i++){
            string x = strs[i];
            sort(x.begin(),x.end());
            lis[x].push_back(strs[i]);
        }

        vector<vector<string>> res;
        for(auto& it : lis){
            res.push_back(it.second);
        }
        return res;
    }
};
