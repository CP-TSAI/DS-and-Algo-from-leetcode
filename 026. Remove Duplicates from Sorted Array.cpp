class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int cur = 0;
        int pre = 0;
        while(cur < nums.size()) {
            if(nums[cur] == nums[pre]) cur++;
            else{
                pre++;
                nums[pre] = nums[cur];
                cur++;
            }
        }
        return pre + 1;
    }
};
