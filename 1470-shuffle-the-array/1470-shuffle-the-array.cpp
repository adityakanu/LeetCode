class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int num = n;
        vector<int> result;
        int x=0,y=n;

        for (int i=0; i<(2*num); i++){
            if(i%2==0){
                result.push_back(nums[x]);
                x++;
            }
            else
            {
                result.push_back(nums[y]);
                y++;
            }
        }
        return result;
        
    }
};