/*
* http://leetcode.com/onlinejudge#question_7
*
* Reverse digits of an integer.
*
* Example1: x = 123, return 321
* Example2: x = -123, return -321
*/

class Solution {
public:
    int reverse(int x) {
        
		int result = 0;
		int sign = (x<0) ? -1 : 1;
		x *= sign;
		
		while(x>0) {
			result = (result*10 + x%10);			
			x /= 10;
		}
		result *= sign;
		return result;
    }
};