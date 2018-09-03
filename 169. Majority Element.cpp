class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int major = 0;
        // int cnt = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == major) cnt++;
        //     else if(cnt == 0) {major = nums[i]; cnt++;}
        //     else cnt--;
        // }
        // return major;
        
        unordered_map<int, int> m; // int, occurence
        int size;
        if(nums.size() % 2 == 0) size = nums.size() / 2 + 1;
        else size = (nums.size() + 1) / 2;
        for(int i: nums){
            m[i]++;
            if(m[i] >= size) return i;
        }
    }
};