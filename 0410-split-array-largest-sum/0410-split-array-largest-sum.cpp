class Solution {
public:
    int numArray(vector<int>& arr, int maxi, int k){
        int sumIntegers = 0;
        int subArray = 1;
        
        for(int i = 0; i<arr.size(); i++){
            if((sumIntegers + arr[i]) <= maxi){
                sumIntegers += arr[i];
            }
            else{
                subArray++;
                sumIntegers = arr[i];
                if(subArray > k) return 1;
            }
        }
        return 0;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        
        while (low <= high){
            int mid = (low + high)/2;
            
            if((numArray(nums, mid, k)) == 1){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};