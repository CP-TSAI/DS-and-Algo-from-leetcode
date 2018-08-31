class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> num_pose; // num, pose
        for(int i = 0; i < nums.size(); i++)
            num_pose.push_back({nums[i], i});
        sort(num_pose.begin(), num_pose.end());
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            int sum = num_pose[left].first + num_pose[right].first;
            if(sum < target) left++;
            else if(sum > target) right--;
            else return {num_pose[left].second, num_pose[right].second};
        }
    }
};
