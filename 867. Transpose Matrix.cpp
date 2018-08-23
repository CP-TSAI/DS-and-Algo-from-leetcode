class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> res;
        for(int i = 0; i < A[0].size(); i++){
            vector<int> v;
            for(int j = 0; j < A.size(); j++){
                v.push_back(A[j][i]);
            }
            res.push_back(v);
        }
        return res;
    }
};