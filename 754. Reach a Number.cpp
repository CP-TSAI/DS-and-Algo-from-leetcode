class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        int sum = 0;
        int n = 1;
        while(sum < target){
            sum += n;
            n++;
        }
        n--;
        int diff = sum - target;
        if(diff % 2 == 0) return n;
        else{
            if((n + 1) % 2 == 0) return 2 + n;
            else return 1 + n;
        }
    }
};