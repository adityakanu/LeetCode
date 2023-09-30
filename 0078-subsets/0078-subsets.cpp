class Solution {
public:
    void solve(vector<int> op, vector<int> ip, vector<vector<int>> &ans){
        if(ip.size() == 0){
            return ans.push_back(op);
        }
        
        vector<int> op1 = op;
        vector<int> op2 = op;
        
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(op1, ip, ans);
        solve(op2, ip, ans);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> op;
        vector<vector<int>> ans;
        
        solve(op, nums, ans);
        return ans;
    }
};