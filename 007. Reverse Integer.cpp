class Solution {
public:
    int reverse(int x) {
        int ret = 0;
        while (x != 0) {
        // handle overflow/underflow
            if (abs(ret) > 214748364) return 0;
            ret = ret * 10 + x % 10;
            x = x / 10;
        }
        return ret;
    }
};

// 由于INT_MAX = 2147483647, INT_MIN = -21474836478
// 如果ret > 214748364，那么abs(ret*10)>=2147483650一定会overflow。
// 反之如果ret = 214748364，则一定有x % 10 = 1。若x%10 = 2，则原来的x = 2463847412 > INT_MAX，与输入参数为int类型矛盾。
// 好難＠＠＠＠＠＠＠＠