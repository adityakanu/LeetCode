class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        
        while( i < n){
            if (nums[i]%2 == 1){
                j= i +1;
                while(j<n){
                    if(nums[j]%2 == 0){
                        swap(nums[i], nums[j]);
                        j++;
                        break;
                    }
                    else{
                        j++;
                    }
                }
                if(j == n) break;
                i++;
            }
            else{
                i++;
            }
        }
        return nums;
    }
};