class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    int cnt=0;
    for(int j = 0;j<nums.size();j++){
    if(mp.find(nums[j]+k) != mp.end()){
      cnt += mp[nums[j]+k];
    }

    if (k!=0 && mp.find(nums[j]-k) != mp.end()){
      cnt += mp[nums[j]-k];
    }
    mp[nums[j]]++;
  }
  return cnt;
    }
};