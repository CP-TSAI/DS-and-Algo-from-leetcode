class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        int sum = 0;
        int n = A.size();
        int pos_val = 0;
        for(int i = 0; i < n; i++){
            sum += A[i];
            pos_val += i * A[i];
        }
        int res = pos_val;
        for(int i = 1; i < n; i++){
            pos_val = pos_val + sum - n * A[n - i];
            res = max(res, pos_val);
        }
        return res;
    }
};