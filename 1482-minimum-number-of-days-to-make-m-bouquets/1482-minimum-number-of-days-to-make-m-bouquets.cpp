class Solution {
public:
    bool possible(vector<int>& v, int m, int k, int day){
        int cnt = 0, totalBloom = 0;
        for(int i = 0; i<v.size(); i++){
            if(v[i] <= day){
                cnt++;
            }
            else{
                totalBloom += (cnt/k);
                cnt = 0;
            }
        }
        totalBloom += (cnt/k);
        if(totalBloom >= m) {
            return true;
        }
        return false;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = m * 1LL * k * 1LL; // converted to long long 
        if(val > n) return -1;
        // int ans = 0;
        
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        
        while (low <= high){
            int mid = (low + high)/2;
            
            if(possible(bloomDay, m, k, mid)){
                // ans = min(ans, mid);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low; // since low and high move to opposite polarity
    }
};