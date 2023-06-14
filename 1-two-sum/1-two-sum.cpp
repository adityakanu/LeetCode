class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result;
        for (int i = 0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if (nums[i]+nums[j]==target){
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
                
            }
        }
        return result;
    }
};