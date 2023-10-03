class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        int ans = 0;
        
        for(auto it:nums){
            mp[it]++;
        }
        
        for(auto it:mp){
            if(it.second >=2){
                ans+= ((it.second)*(it.second-1))/2;
            }
        }
        return ans;
    }
};