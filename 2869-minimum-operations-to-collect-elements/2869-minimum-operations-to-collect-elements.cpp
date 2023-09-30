class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        //tf is this code
        // int cnt[51] = {}, i = nums.size() - 1;
        // for (int found = 0; found < k; --i)
        //     found += nums[i] <= k && cnt[nums[i]]++ == 0;
        // return nums.size() - i - 1;
        
        
        int n = nums.size();
        set<int> ans;
        // int cnt = 0;
        for(int i = n-1; i>=0; i--){
            
            if(nums[i] <= k){
                ans.insert(nums[i]);  
            }
            
            
            // cnt++;
            if(ans.size() == k){
                return n-i;
            }
            
        }
        return 0;
    }
};