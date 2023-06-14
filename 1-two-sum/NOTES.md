Better solution using hashing
tc- O(NlogN) if map and O(N) if unordered and worst case O(N^2) in unordered map
```
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
```
Slightly better Optimal solution using two pointer greedy will work if we just have to say YES or NO. This won't work if we  have to return the indices.