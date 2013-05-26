/* 
* http://leetcode.com/onlinejudge#question_3
*
* Given a string, find the length of the longest substring without 
* repeating characters. 
*
* For example, the longest substring without repeating letters for
* "abcabcbb" is "abc", which the length is 3.
* 
* For "bbbbb" the longest substring is "b", with the length of 1.
*/

#include <string>
#include <cmath>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		
		int result = 0;
		int start = 0;
		int end = 0;
		bool visited[256] = {false};
		
		while(end < s.size()) {
			char letter = s[end];
			int letter_i = static_cast<int>(letter);
			// reset counter and set letters to false
			if(visited[letter_i] {
				result = max(result, end-start);
				while(s[start] != s[end]) {
					visited[static_cast<int>(s[start++])] = false;
				}
				start++;
				end++;
			} else {
				// set letter as visited and increase end pointer
				visited[letter_i] = true;
				++end;
			}
		}
		
		result = max(res,end-start);
		return result;
        
    }
};