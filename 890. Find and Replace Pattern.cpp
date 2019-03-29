class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        for (int i = 0; i < words.size(); i++) {
            if (isSamePattern(words[i], pattern)) {
                res.push_back(words[i]);
            }
        }
        return res;
    }
    bool isSamePattern(string s1, string s2) {
        if (s1.size() != s2.size()) return false;
        unordered_map<char, char> s1_to_s2;
        unordered_map<char, char> s2_to_s1;
        for (int i = 0; i < s1.size(); i++) {
            if (s1_to_s2.count(s1[i]) == 0 && s2_to_s1.count(s2[i]) == 0) {
                s1_to_s2[s1[i]] = s2[i];
                s2_to_s1[s2[i]] = s1[i];
            }
            else {
                if (s1_to_s2.count(s1[i]) != 0 && s1_to_s2[s1[i]] != s2[i]) {
                    return false;
                }
                if (s2_to_s1.count(s2[i]) != 0 && s2_to_s1[s2[i]] != s1[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};