class Solution {
public:
    void reverse(int start, int end, string &s){
        int n = s.length();
        
        while(start<=end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        
    }
    string reverseWords(string s) {
        int n = s.length();
        int lastSpace = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == ' '){
                reverse(lastSpace, i-1, s);
                lastSpace = i+1;
            }
            
        }
        reverse(lastSpace, n-1, s);
        return s;
    }
};