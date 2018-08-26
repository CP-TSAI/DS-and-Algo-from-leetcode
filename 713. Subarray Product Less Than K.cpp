class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int left = 0;
        int res = 0;
        int mul = 1;
        for(int i = 0; i < nums.size(); i++){
            mul *= nums[i];
            while(mul >= k){
                mul /= nums[left];
                left++;
            }
            res += (i - left + 1);
        }
        return res;
        
        
        
        // int res = 0;
        // if(k <= 1) return res;
        // for(int i = 0; i < nums.size(); i++){
        //     int mul = 1;
        //     for(int j = i; j < nums.size(); j++){
        //         if(nums[j] == 1) {res++; continue;}
        //         mul *= nums[j];
        //         if(mul < k) res++;
        //         else break;
        //     }
        // }
        // return res;
    }

};