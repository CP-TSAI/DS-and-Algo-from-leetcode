class Solution {
public:
    string reverseVowels(string s) {
        // method 0: stack
        stack<char> vowel;
        for(auto &i : s)
        {
            if(isVowel(i))
            {
                vowel.push(i);
            }
        }
        for(auto &i : s)
        {
            if(isVowel(i))
            {
                i = vowel.top();
                vowel.pop();
            }
        }
        return s;


        // method 1: two pointer
        // int left = 0; 
        // int right = s.size() - 1;
        // while(left < right){
        //     while(!isVowel(s[left]) && left < right) left++;
        //     while(!isVowel(s[right]) && left < right) right--;
        //     swap(s[left], s[right]);
        //     left++;
        //     right--;
        // }
        // return s;
        
        
        // method 2: array
        // vector<char> vowel;
        // for(auto &i : s){
        //     if(isVowel(i)){
        //         vowel.push_back(i);
        //     }
        // }
        // int cnt = vowel.size() - 1;
        // for(auto &i : s){
        //     if(isVowel(i)){
        //         i = vowel[cnt];
        //         cnt--;
        //     }
        // }

        // return s;
    }

    bool isVowel(char i){
        if(i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U'
              || i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
            return true;
        return false;

    }
};