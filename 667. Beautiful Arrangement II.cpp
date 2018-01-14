class Solution {
public:
    vector<int> constructArray(int n, int k) {        
        vector<int> res;
        int i = 1, j = n;
        while (i <= j) {
            if (k > 1){
                if(k % 2 == 1)  {res.push_back(i); i++;}
                else {res.push_back(j); j--;}
                k--;
            } 
            else {res.push_back(i); i++;}
        }
        return res;
    }
};