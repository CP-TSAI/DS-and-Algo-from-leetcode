class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxCnt = 0;
        int start = 0;
        int res = 0;
        vector<int> repeat(26, 0);
        for(int i = 0; i < s.size(); i++){
            maxCnt = max(maxCnt, ++repeat[s[i]-'A']);
            while(i - start + 1 - maxCnt > k){
                repeat[s[start] - 'A']--;
                start++;
            }
            res = max(res, i - start + 1);
        }
        return res;
    }
};