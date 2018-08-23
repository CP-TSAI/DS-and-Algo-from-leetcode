class Solution {
public:
    int binaryGap(int N) {
        string n_binary = toBinary(N);
        int res = 0;
        for(int i = 0; i < n_binary.size() - 1; i++){
            for(int j = i + 1; j < n_binary.size(); j++){
                if(n_binary[i] == '1' && n_binary[j] == '1'){
                    res = max(res, j - i);
                    break;
                }
            }
        }
        return res;
    }
    
    string toBinary(int n){
        string bin = "";
        while(n != 0){
            bin = (n % 2 == 0 ? "0" : "1") + bin;
            n /= 2;
        }
        return bin;
    }
};
