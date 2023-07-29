class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        unordered_map<int, int> mp;
        
        for(int i = 0; i<s.length(); i++){
            mp[s[i]]++;
        }
        for(int i = 0; i<t.length(); i++){
            if(mp.find(t[i]) != mp.end()){
                auto it = mp.find(t[i]);
                if((it->second) >= 1){
                    mp[it->first]--;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
            
        }
        return true;
    }
};