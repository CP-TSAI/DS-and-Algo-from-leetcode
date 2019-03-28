class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum = accumulate(A.begin(), A.end(), 0);
        if (sum % 3 != 0) return false;
        int subSum = 0;
        int part = 0;
        for (int i = 0; i < A.size(); i++) {
            subSum = subSum + A[i];
            if (subSum == sum/3) {
                subSum = 0;
                part++;
            }
        }
        return part == 3 ? true : false;
    }
};