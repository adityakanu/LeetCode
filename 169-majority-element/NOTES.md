​
Better:  Using Hashing
``` class Solution {
public:
int majorityElement(vector<int>& nums) {
int n = nums.size();
unordered_map<int, int> Map;
for(int i = 0; i<n; i++){
Map[nums[i]]++;
}
for(auto it:Map){
if(it.second> (n/2)){
return it.first;
}
}
return -1;```
​
**Optimal: Moore's voting algorithm**
​
``` class Solution {
public:
int majorityElement(vector<int>& nums) {
int n = nums.size();
int cnt = 0;
int el=0;
for(int i = 0; i<n; i++){
if(cnt == 0){
cnt = 1;
el = nums[i];
}
else if(nums[i] == el){
cnt++;
}
else {
cnt--;
}
}
return el;
}
};```
​
if its not given that there's a majority element for sure then we have to write few more lines
```int cnt1=0;
for(int i = 0; i<n; i++){
if (nums[i] == el){
cnt1++;
}
}
if (cnt1 > (n/2)){
return el;
}
return -1;```