class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream iss(s);
        vector<string> vec;
        string str;
        while(iss >> str){
            vec.push_back(str);
        }
        if(vec.empty()) return 0;
        return vec.back().size();
        
    }
};