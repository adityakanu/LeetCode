class Solution {
public:
    void solve(vector<int>&v, int k, int &curr){
        if(v.size() == 1) return;
        curr = (curr + k) % v.size();
        v.erase(v.begin()+curr);
        
        solve(v, k, curr);
    }
    
    int findTheWinner(int n, int k) {
        vector<int> v;
        for(int i = 0; i<n; i++){
            v.push_back(i+1);
        }
        int curr = 0;
        
        solve(v, --k, curr);
        return v[0];
    }
};