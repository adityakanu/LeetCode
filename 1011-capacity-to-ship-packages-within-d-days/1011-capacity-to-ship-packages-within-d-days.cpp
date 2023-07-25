class Solution {
public:    
    bool possibleWithCapacity(vector<int>& v, int day, int cap){
        int sum = 0, d = 1;
        
        for (int i = 0; i < v.size(); i++){            
            if(sum+v[i] > cap){
                sum = v[i];
                d++;
                if(d > day) return false;
            }
            else{
                sum += v[i];
            }
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        
        while(low <= high){
            int mid = (low + high)/2;
            
            if(possibleWithCapacity(weights, days, mid)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};