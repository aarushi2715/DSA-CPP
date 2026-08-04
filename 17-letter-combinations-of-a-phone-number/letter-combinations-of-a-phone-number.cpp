class Solution {
public:
    void backtrack(int index, const string& digits, string& current, vector<string>& result, const vector<string>& mapping) {
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }
        string letters = mapping[digits[index] - '0'];
        for (char c : letters) {
            current.push_back(c);
            backtrack(index + 1, digits, current, result, mapping);
            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) return result;
        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        string current = "";
        backtrack(0, digits, current, result, mapping);
        return result;
    }
};
