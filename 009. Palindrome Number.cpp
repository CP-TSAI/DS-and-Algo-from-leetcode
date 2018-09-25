class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        string xStr = to_string(x);
        int left = 0;
        int right = xStr.size() - 1;
        while(left < right){
            if(xStr[left] != xStr[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};