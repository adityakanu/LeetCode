class Solution {
public:
    bool checkThreshold(vector<int>& v, int th, int div){
        int sum = 0;
        for(int i = 0; i<v.size(); i++){
            sum += (v[i] + div - 1)/div;
            if(sum > th) return false;
        }
        return true;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        
        while (low <= high){
            int mid = (low + high)/2;
            
            if(checkThreshold(nums, threshold, mid)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};