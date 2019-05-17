class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        unordered_set<string> passed;
        unordered_set<string> non_passed;
        int cnt = 0;
        for (string word: words) {
            if (passed.count(word) || non_passed.count(word)) {
                if (passed.count(word)) cnt++;
            }
            else if (isMatched(S, word)) {
                cnt++;
                passed.insert(word);
            }
            else {
                non_passed.insert(word);
            }
        }
        return cnt;
    }
    bool isMatched(string s1, string s2) {
        if (s2.size() > s1.size()) return false;
        int idx = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == s2[idx]) idx++;
            if (idx == s2.size()) return true;
        }
        return false;
    }
};