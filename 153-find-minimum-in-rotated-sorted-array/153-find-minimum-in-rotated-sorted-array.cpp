class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int low = 0, high = n-1;
        
        while (low<=high){
            int mid = (low+high)/2;
            
            mini = min(mini, nums[mid]);
            
            if(nums[low] <= nums[mid]){
                mini = min(mini, nums[low]);// this was the game changer as we know that the sorted portion if has the minimum then it most definately will be the low in case of left and mid incase of right.
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