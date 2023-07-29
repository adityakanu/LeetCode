class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        
        for(auto num : nums){
            ++mp[num];
        }
        
        vector<vector<int>> bucket(nums.size() + 1);
        for(auto p : mp){
            bucket[p.second].push_back(p.first);
        }
        
        for(int i = bucket.size() - 1; i>=0 && ans.size() < k; --i){
            for(auto it : bucket[i]){
                ans.push_back(it);
                if(ans.size() == k)
                    break;
            }
        }
        return ans;
    }
};