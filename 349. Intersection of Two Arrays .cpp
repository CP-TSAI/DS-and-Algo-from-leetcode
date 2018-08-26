class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        for(auto i: nums1) m[i]++;
        
        vector<int> res;
        for(auto i: nums2){
            if(m[i] != 0) res.push_back(i);
        }
        sort(res.begin(), res.end());
        auto iter = unique(returnes.begin(), res.end());
        res.erase(iter, res.end());
        return res;
    }
};
