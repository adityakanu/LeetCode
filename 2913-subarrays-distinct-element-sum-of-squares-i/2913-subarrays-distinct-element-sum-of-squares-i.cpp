class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        map<int, int> mp;
        for(int i = 0; i<nums.size(); ++i){
            for(int j = i; j<nums.size(); ++j){
                int a = i;
                while (a <= j) {
                    mp[nums[a]];
                    a++;
                }
                ans += mp.size() * mp.size();
                mp.clear();
            }
        }
        return ans;
    }
};