class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        int lastValue = groups[0];
        vector<string> ans;
        ans.push_back(words[0]);
        for(int i = 1; i<n; i++){
            if(groups[i] == lastValue){
                continue;
            }
            ans.push_back(words[i]);
            lastValue = groups[i];
        }
        return ans;
    }
};