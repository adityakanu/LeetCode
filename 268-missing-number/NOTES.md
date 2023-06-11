One funny thing I would like to add is that here in the ` else if`  ++i and i++ where game changing. i++ would return the value and then increment it while ++i increamented it and then returned the value.
*Here's the first code*
​
```
class Solution {
public:
int missingNumber(vector<int>& nums) {
int n = nums.size();
sort(nums.begin(), nums.end());
for (int i = 0; i<n; i++){
if (nums[i]!=i){
return i;
break;
}
else if(i==n-1){
return ++i;
}
}
return 1;
}
};
```
​
and for the bit manipulation solution have to give some thought to why the `result=nums.size();`
​
​