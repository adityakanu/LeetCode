class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        int result=nums.size();
        
        for(int num:nums){
            result = result^num;
            result = result^i;
            i++;
        }
        return result;
    }
};