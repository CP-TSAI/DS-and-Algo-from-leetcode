class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trusted(N, 0);
        vector<int> trusting(N, 0);
        for (int i = 0; i < trust.size(); i++) {
            trusting[trust[i][0]-1]++;
            trusted[trust[i][1]-1]++;
        }
        int res = -1;
        for (int i = 0; i < N; i++) {
            if (trusted[i] == N-1 && trusting[i] == 0) {
                return i+1;
            }
        }
        return res;
    }
};