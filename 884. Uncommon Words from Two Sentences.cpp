class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> res;
        istringstream iss1(A);
        istringstream iss2(B);
        unordered_map<string, int> m; // string, occurence
        string tmp;
        while(iss1 >> tmp) m[tmp]++;
        while(iss2 >> tmp) m[tmp]++;
        for(auto i : m){
            if(i.second == 1) res.push_back(i.first);
        }
        return res;
    }
};