/**
* http://leetcode.com/onlinejudge#question_22
*
* Given n pairs of parentheses, write a function to generate all combinations of
* well-formed parentheses.
*
* For example, given n = 3, a solution set is:
*
* "((()))", "(()())", "(())()", "()(())", "()()()"
*/

#include <vector>
#include <string>
#include <cstring>

class Solution {
public:
	std::vector<std::string> generateParenthesis(int n) {
		
		std::vector<std::string> result;
		generateParenthesis("",result,n,n,n);
        return result;
    }
	
	void generateParenthesis(std::string s, std::vector<std::string> &result, int closed, int open, int &n) {
		
		if (0 == closed && 0 == open) {
			result.push_back(s);
		}
		
		if (open > 0) {
			generateParenthesis(s+"(", result, closed,open-1,n);
		}
		
		if (closed > open) {
			generateParenthesis(s+")", result, closed-1,open,n);
		}
	}
};