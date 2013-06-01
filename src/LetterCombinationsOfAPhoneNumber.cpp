/*
* http://leetcode.com/onlinejudge#question_17
*
* Given a digit string, return all possible letter combinations that the number
* could represent.
*
* A mapping of digit to letters (just like on the telephone buttons) is given below.
*
* Input: Digit string "23"
* Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
*
* Note:
* Although the above answer is in lexicographical order, your answer could be in
* any order you want.
*
*/

class Solution {
public:
    const string keypad[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" }; 
        
    vector<string> letterCombinations(string digits) {
        vector<string> results;
        letterCombinationHelper(results,digits,0,"");
        return results;
    }
    
    void letterCombinationHelper(vector<string> &results, string &digits, size_t pos, string str) {
        
        if(digits.size() == pos) {
            results.push_back(str);
            return;
        }
        
        int digit = digits[pos] - '0';
        for(int i = 0; i < keypad[digit].size(); ++i) {
            letterCombinationHelper(results,digits,pos+1,str+keypad[digit][i]);
        }
    }
};