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

#include <string>
#include <vector>

class Solution {
public:
	static std::string keypad[10]; //declaration	
	//= { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" }; 
	
	std::vector<std::string> letterCombinations(std::string digits) {

		keypad[0] = "";
		keypad[1] = "";
		keypad[2] = "abc";
		keypad[3] = "def";
		keypad[4] = "ghi";
		keypad[5] = "jkl";
		keypad[6] = "mno";
		keypad[7] = "pqrs";
		keypad[8] = "tuv";
		keypad[9] = "wxya";

		std::vector<std::string> results;
        letterCombinationHelper(results,digits,0,"");
        return results;
    }
    
	void letterCombinationHelper(std::vector<std::string> &results, std::string &digits, size_t pos, std::string str) {
        
        if(digits.size() == pos) {
            results.push_back(str);
            return;
        }
        
        int digit = digits[pos] - '0';
        for(unsigned int i = 0; i < keypad[digit].size(); ++i) {
            letterCombinationHelper(results,digits,pos+1,str+keypad[digit][i]);
        }
    }
};