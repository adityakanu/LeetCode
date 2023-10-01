class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        
        long long res = 0;
        int maxValue = 0;
        int maxDiff = 0;
        
        for(int &it : nums){
            res = max(res, 1LL*maxDiff*it);
            maxDiff = max(maxDiff, maxValue - it);
            maxValue = max(maxValue, it);
        }
        return res;
    }
};