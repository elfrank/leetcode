/**
* http://leetcode.com/onlinejudge#question_20
*
* Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
* determine if the input string is valid.
*
* The brackets must close in the correct order, "()" and "()[]{}" are all valid
* but "(]" and "([)]" are not.
*/

class Solution {
public:
    bool isValid(string s) {
        
		if (0 ==s.size()) {
			return true;
		} else if (1 == s.size()) {
			return false;
		}
		
		std::stack<char> st;
		for (int i = 0; i < s.size(); ++i) {
			char c = s[i];
			if ('('==c || '{' == c || '[' == c) {
				st.push(c);
			} else if ( ')'==c || '}' == c || ']' == c) {
				if (st.empty()) {
					return false;
				}
				char tmp = st.top();
				if ( (')' == c && '(' == tmp) ||
					 ('}' == c && '{' == tmp) ||
					 (']' == c && '[' == tmp)) {
						st.pop();
				}
			}
		}
		
		return st.empty();
    }
};