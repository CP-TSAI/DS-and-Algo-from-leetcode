class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool isBigger = 1;
        bool isSmaller = 1;
        for(int i = 0; i < A.size() - 1; i++){
            if(A[i] < A[i+1])
                isSmaller = 0;
            if(A[i] > A[i+1])
                isBigger = 0;
        }
        return isBigger || isSmaller;
    }
};