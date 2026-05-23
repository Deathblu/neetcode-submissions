class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ml = 1;
        int cnt = 1;
        for(int i=1;i<n;i++){
            if(nums[i-1] == nums[i]-1){
                cnt++;
            }
            else if(nums[i-1] == nums[i]){
                continue;
            }
            else{
                cnt=1;
            }
            ml = max(cnt,ml);
        }
        return ml;
    }
};
