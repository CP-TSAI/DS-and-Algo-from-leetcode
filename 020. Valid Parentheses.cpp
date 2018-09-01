class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0) return false;
        if(s.empty()) return true;
        stack<char> stk;
        for(char c: s){
            if(c == '{' || c == '[' || c == '(') stk.push(c);
            else if(!stk.empty() && isPair(stk.top(), c)) stk.pop();
            else return false;
        }
        return stk.empty() ? true : false;
    }
    bool isPair(int left, int right){
        if(left == '{' && right == '}') return true;
        if(left == '[' && right == ']') return true;
        if(left == '(' && right == ')') return true;
        return false;
    }
};
