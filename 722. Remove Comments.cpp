class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
        vector<string> res;
        bool isBlocked = 0;
        string out = "";
        for(string line: source){
            for(int i = 0; i < line.size(); i++){
                if(!isBlocked){
                    if(i == line.size()-1) out = out + line[i];
                    else{
                        string tmp = line.substr(i, 2);
                        if(tmp == "/*") { isBlocked = 1; i++; }
                        else if(tmp == "//") break;
                        else out = out + line[i];
                    }
                }
                else{
                    if(i < line.size()-1){
                        string tmp = line.substr(i, 2);
                        if(tmp == "*/") { isBlocked = 0; i++; }
                    }
                }
            }
            if(!out.empty() && isBlocked == 0) {
                res.push_back(out);
                out = "";
            }
        }
        return res;
    }
};