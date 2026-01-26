class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int p = 0;
        int t = INT_MIN;
        for(int i = 0; i<nums.size();i++){
            int curr = max(p+nums[i],nums[i]);
            p = curr;
            t = max(t,curr);
        }
        return t;
    }
};