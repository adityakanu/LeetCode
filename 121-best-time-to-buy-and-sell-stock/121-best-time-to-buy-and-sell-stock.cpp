class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minProfit = INT_MAX;
        int maxProfit = 0;
        
        for (int i=0; i < prices.size(); i++){
            minProfit = min(minProfit, prices[i]);
            maxProfit = max(maxProfit, prices[i]-minProfit);
        }
        return maxProfit;
    
    }
    
};