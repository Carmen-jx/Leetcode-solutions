class Solution {

    vector <string> letters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs",       "tuv", "wxyz"};


    void combo(int i, string && str, vector<string> &ans, string digits){
        if (i == digits.size()){
            ans.emplace_back(str);
            return;
        }

        for  (const char letter : letters[digits[i] - '0']){
            str.push_back(letter);
            combo(i + 1, move(str), ans, digits);
            str.pop_back();
            }

    }
public:
    vector<string> letterCombinations(string digits) {
        vector <string> ans;

        if (digits.size() !=0 ){
            combo(0,"" ,ans, digits);
        }
      
        return ans;
    }
};