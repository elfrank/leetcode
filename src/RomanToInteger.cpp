/**
* http://leetcode.com/onlinejudge#question_13
*
* Given a roman numeral, convert it to an integer.
*
* Input is guaranteed to be within the range from 1 to 3999.
*/

class Solution {
public:
    
	map<char,int> table;

    int romanToInt(string s) {
        
		table['I'] = 1;
		table['V'] = 5;
		table['X'] = 10;
		table['L'] = 50;
		table['C'] = 100;
		table['D'] = 500;
		table['M'] = 1000;
		
		int n = s.size();
		int result = 0;
		
		for (int i = 0; i < n-1; ++i) {
			if(table[s[i]] < table[s[i+1]]) {
				result -= table[s[i]];
			} else {
				result += table[s[i]];
			}
		}
		
		result+=table[s[n-1]];
		
		return result;
    }
};