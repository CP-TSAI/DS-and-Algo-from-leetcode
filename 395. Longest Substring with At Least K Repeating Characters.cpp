class Solution {
public:
    int longestSubstring(string s, int k) {
        vector<int> repeat(26, 0);
        for(auto c: s) ++repeat[c-'a'];
        int idx = 0;
        while(repeat[s[idx] - 'a'] >= k && idx < s.size()) idx++;
        if(idx == s.size()) return idx;
        
        int left = longestSubstring(s.substr(0, idx), k);
        int right = longestSubstring(s.substr(idx+1), k);
        return max(left, right);
    }
};