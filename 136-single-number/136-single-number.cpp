class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int single = 0;
        for (int i = 0; i<n; i++){
            single = single^(nums[i]);
        }
        return single;
    }
};