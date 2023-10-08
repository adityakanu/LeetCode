class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        int n = processorTime.size();
        sort(tasks.begin(), tasks.end(), greater());
        sort(processorTime.begin(), processorTime.end());
        int minTime = INT_MIN;
        
        for(int i = n-1; i>=0; i--){
            int temp = max(max(processorTime[i]+tasks[i*4], processorTime[i]+tasks[(i*4)+1]), max(processorTime[i]+tasks[(i*4)+2], processorTime[i]+tasks[(i*4)+3]));
            minTime = max(temp, minTime);
        }
        return minTime;
    }
};