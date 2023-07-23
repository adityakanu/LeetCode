class Solution {
public:
//     // Find max element
//     int findMax(vector<int>& v){
//         int n = v.size();
//         int maxi = INT_MIN;
//         for (int i = 0; i<n; i++){
//             maxi = max(maxi, v[i]);
//         }
//         return maxi;
//     }
//     // Find total number of hours taken
//     int calculateTotalHours(vector<int>& v, int hourly){
//         long long totalHours = 0;
//         int n = v.size();
//         for (int i = 0; i<n; i++){
//             totalHours += ceil((double)(v[i]) / (double)(hourly));
//         }
//         return totalHours;
//     }
    
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int low = 1, high = findMax(piles);
        
//         while(low <= high){
//             int mid = (low + high)/2;
//             long long totalHrs = calculateTotalHours(piles, mid);
            
//             if(totalHrs <= (long long)h){
//                 high = mid - 1;
//             }
//             else{
//                 low = mid + 1;
//             }
//         }
//         return low;
        
    // }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 1000000000;
        while (low < high) {
            int mid = (low + high) / 2;
            int totalHours = 0;
            
            for (int i : piles){
                totalHours += (i + mid - 1) / mid;
            }
                
            if (totalHours > h)
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }
};