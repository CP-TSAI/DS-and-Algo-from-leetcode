class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> out;
        DFS(s, res, out, 0);
        return res;
    }
    
    void DFS(string s, vector<vector<string>>& res, vector<string>& out, int start){
        if(start == s.size()){
            res.push_back(out);
            return;
        }
        for(int i = start; i < s.size(); i++){
            if(isPalindrome(s, start, i)){
                out.push_back(s.substr(start, i-start+1));
                DFS(s, res, out, i+1);
                out.pop_back();
            }
        }
    }
    
    bool isPalindrome(string s, int start, int end){
        while(start < end){
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};