class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        if(n <= 0) return res;
        for(int i = 1; i <= n; i++)
        {
            if(i % 3 == 0 && i % 5 != 0) res.push_back("Fizz");
            else if(i % 5 == 0 && i % 3 != 0) res.push_back("Buzz");
            else if(i % 15 == 0) res.push_back("FizzBuzz");
            else res.push_back(to_string(i));
        }
        return res;
    }
};