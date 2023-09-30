class Solution {
public:
    void solve(int numberOfOcc, int &cnt){
        if(numberOfOcc % 3 == 0){
            cnt += (numberOfOcc / 3);
            return;
        }
        else{
            cnt += ((numberOfOcc - 1) / 3) + 1;
            return;
        }
    }
    
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            if(it.second == 1) return -1;
            solve(it.second, cnt);
        }
        return cnt;
    }
};