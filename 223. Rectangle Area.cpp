class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int sum = (C-A) * (D-B) + (G-E) * (H-F);
        if(E >= C || F >= D || A >= G || B >= H) return sum; // non-overlap
        
        sum -= (min(C, G) - max(A, E)) * (min(D, H) - max(B, F));
        return sum;
    }
};