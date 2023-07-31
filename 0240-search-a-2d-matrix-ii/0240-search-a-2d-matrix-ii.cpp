class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int top = 0, right = m - 1;
        
        while(top < n && right >= 0){
            if(matrix[top][right] == target) return true;
            
            if(matrix[top][right] > target){
                right--;
            }
            else{
                top++;            }
        }
        return false;
    }
};