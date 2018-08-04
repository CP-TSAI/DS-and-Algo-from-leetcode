// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        if(guess(n) == 0) return n;
        int min = 1;
        int max = n;
        while(min < max){
            int mid = min + (max-min) / 2 s;
            if(guess(mid) == 1) min = mid;
            else if(guess(mid) == -1) max = mid;
            else return mid;
        }
    }
};