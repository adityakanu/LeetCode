class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        
        for(auto s : strs){
            string temp = s;
            sort(s.begin(), s.end());
            mp[s].push_back(temp); // s is the key here after getting sorted and the anagrams get pushed to it.
        }
        for(auto anagram : mp){
            ans.push_back(anagram.second);
        }
        return ans;
    }
};