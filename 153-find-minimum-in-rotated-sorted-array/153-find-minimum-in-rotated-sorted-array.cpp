class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int low = 0, high = n-1;
        // have to redo the approach after seeing this test case .. .maybe have to compare sorted part and unsorted part separately
        while (low<=high){
            int mid = (low+high)/2;
            
            mini = min(mini, nums[mid]);
            
            if(nums[low] <= nums[mid]){
                mini = min(mini, nums[low]);
                low = mid + 1;
            }
            else{
                mini = min(mini, nums[mid]);
                high = mid - 1;
            }
            
        }
        return mini;
    }
};