class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::ios::sync_with_stdio(false);
        cin.tie(NULL);
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int childIndex = g.size()-1;
        int cookieIndex = s.size()-1;

        int ans = 0;

        while (cookieIndex >= 0 && childIndex >= 0) {
            if (g[childIndex] > s[cookieIndex]) {
                childIndex--;
            } else {
                ans++;
                cookieIndex--;
                childIndex--;
            }
        }
        return ans;
    }
};