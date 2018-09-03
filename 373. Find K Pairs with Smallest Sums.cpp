class Solution {
public:
    vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int, int>> res;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                res.push_back({nums1[i], nums2[j]});
            }
        }
        sort(res.begin(), res.end(), 
             [](const pair<int, int>& p1, const pair<int, int>& p2)->bool{return p1.first+p1.second < p2.first+p2.second;});
        if(k > res.size()) return res;
        else return vector<pair<int, int>>(res.begin(), res.begin() + k);
    }
};