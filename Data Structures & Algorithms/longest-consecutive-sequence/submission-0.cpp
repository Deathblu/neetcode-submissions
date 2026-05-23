class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(),nums.end());
        int len = 0;
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == nums[i]){ continue;}
            else if(nums[i-1] == nums[i] - 1){
                cnt++;
            } else{
                len = max(len, cnt);
                cnt=1;
            }
        }
        return max(len,cnt);
    }
};
