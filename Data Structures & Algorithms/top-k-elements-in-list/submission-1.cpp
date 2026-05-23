class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        
        for(int i : nums){
            freq[i]++;
        }

        // returing k most occuring numbers in nums
        vector<vector<int>> bucket(n + 1);

        for(auto it : freq){
            bucket[it.second].push_back(it.first);
        }

        vector<int> result;

        for(int i = bucket.size()-1; i >= 0 && result.size() < k; i--){
            for(int num : bucket[i]){
                result.push_back(num);
            }
        }

        return result;
    }
};
