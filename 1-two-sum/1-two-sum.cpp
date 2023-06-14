class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> theMap;
        vector<int> result;
        for(int i = 0; i<n; i++){
            int num=nums[i];
            int more = target-num;
            
            if(theMap.find(more) != theMap.end()){
                result.push_back(theMap[more]);
                result.push_back(i);
                break;
            } 
            theMap[num] = i;
        }
        return result;
    }
};