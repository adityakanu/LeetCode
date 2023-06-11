Have to go through this solution at a later date to understand which one is more efficient
​
for now my thoughts are that this is the brute force solution. But I highly doubt that
```
class Solution {
public:
void moveZeroes(vector<int>& nums) {
int j = 0;
// move all the nonzero elements advance
for (int i = 0; i < nums.size(); i++) {
if (nums[i] != 0) {
nums[j++] = nums[i];
}
}
for (;j < nums.size(); j++) {
nums[j] = 0;
}
}
};
```