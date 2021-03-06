class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.size() == 0) return false;
        int left = 0;
        int right = nums.size()-1;
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target) return true;
            else if(nums[mid] < nums[right]){
                if(nums[mid]  < target && target <= nums[right]) left = mid + 1;
                else right = mid - 1;
            }
            else if(nums[mid] > nums[right]){
                if(nums[left] <= target && nums[mid] > target) right = mid - 1;
                else left = mid + 1;
            }
            else --right;
        }
        return false;
    }
};

// ref: http://www.cnblogs.com/grandyang/p/4325840.html