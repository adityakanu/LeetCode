class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxLen = 0;
        
        int cnt = 0;
        
        for(auto it : rectangles){
            maxLen = max(maxLen, min(it[0], it[1]));
        }
        
        for(auto it : rectangles){
            int temp = min(it[0], it[1]);
            if(temp==maxLen){
                cnt++;
            }
        }
        return cnt;
    }
};