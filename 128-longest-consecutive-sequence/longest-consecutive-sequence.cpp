class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_map<int,bool> present,check;

       for(auto a : nums) {
        present[a]=true;
       }

       int longestchain = 0;

       for(auto a: nums){
        if(!check[a] && !present[a-1]){
            int currentchain=0;
            int start = a;
            while(present[start]){
                currentchain++;
                check[start] = true;
                start++;
            }
            longestchain = max(longestchain,currentchain);
        }
       }
       return longestchain;
    }
};