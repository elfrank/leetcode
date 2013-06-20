/*
* http://leetcode.com/onlinejudge#question_6
*
* The string "PAYPALISHIRING" is written in a zigzag pattern
* on a given number of rows like this: (you may want to display
* this pattern in a fixed font for better legibility).
*
* P   A   H   N
* A P L S I I G
* Y   I   R
* And then read line by line: "PAHNAPLSIIGYIR"
*
* Write the code that will take a string and make this conversion
* given a number of rows:
*
* string convert(string text, int nRows);
* convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
*/

/*
* P     I     N
* A   L S   I G
* Y  A  H  R
* P     I
*/

#include <string>

class Solution {
public:
	std::string convert(std::string s, int nRows) {
		if(nRows < 2){
            return s;
        }
		
		int n = s.size();
		int i = 0;
		int stride = 2*nRows-2;
		std::string result;
		
		for(int i = 0; i < n; i+=stride) {
			result.push_back(s[i]);
		}
		
		for(int i = 1; i < nRows-1; ++i) {
			for(int j = i; j < n; j+=stride) {
				result.push_back(s[j]);
				int k = (j-i) + (stride-i);
				if(k<n) {
					result.push_back(s[k]);
				}
			}
		}
		
		for(int i = nRows-1; i < n; i+=stride) {
			result.push_back(s[i]);
		}
		
		return result;
    }
};