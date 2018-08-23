class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> tmp = nums;
        sort(tmp.begin(), tmp.end());
        int mid = (nums.size()+1) / 2;
        int end = nums.size();
        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0){
                nums[i] = tmp[--mid];
            }
            else{
                nums[i] = tmp[--end];
            }
        }
    }
};