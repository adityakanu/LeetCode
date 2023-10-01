class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();

        // res is the maximum value of a triplet (A[i] - A[j]) * A[k].
        // maxValue is the maximum value of pair A[i] - A[j]
        // maxDiff is the maximum value of element A[i].
        
        long long res = 0; // multiplication of maxDiff and current value
        int maxValue = 0; // maximum value found so far
        int maxDiff = 0; // maximum difference found by maxValue and current element
        
        for(int &it : nums){
            res = max(res, 1LL*maxDiff*it); // typecasting to long long
            maxDiff = max(maxDiff, maxValue - it);
            maxValue = max(maxValue, it); // think bottom to up, it will start making sense
        }
        return res;
    }
};