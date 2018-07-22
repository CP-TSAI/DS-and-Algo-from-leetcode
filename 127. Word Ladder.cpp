class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        unordered_map<string, int> m; // string, length
        m[beginWord] = 1;
        queue<string> q({beginWord});
        while(!q.empty()){
            string s = q.front(); q.pop();
            for(int i = 0; i < s.size(); i++){
                string s_next = s;
                for(char ch = 'a'; ch <= 'z'; ch++){ 
                    s_next[i] = ch;
                    if(dict.count(s_next) != 0 && s_next == endWord) return m[s]+1;
                    else if(dict.count(s_next) != 0 && m.count(s_next) == 0){
                        q.push(s_next);
                        m[s_next] = m[s] + 1;
                    }
                }
            }
        }
        return 0;
    }
};