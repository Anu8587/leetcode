class Solution {
public:
    long long func(vector<int>& piles, int hours){
        long long total = 0;
        for(int i = 0;i<piles.size();i++){
         total += (piles[i] + hours - 1) / hours;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans= INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            long long total_hours = func(piles,mid);
            if(total_hours<= h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};